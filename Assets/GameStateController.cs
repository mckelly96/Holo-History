using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

//There should only be 1 of these in the scene
public class GameStateController : MonoBehaviour {

	/*********** GAME STATES **********/
	// TODO: Change these names
	// Things like marker calibration and entering/exiting room are not included
	// Because they aren't really part of the game right now, they are mostly workarounds
	enum possibleGameStatesRelatedToAnna {
		Introduce_Anna,
		Anna_talks_about_A,
		Anna_talks_about_B,
		Outro
	};
	possibleGameStatesRelatedToAnna currentGameState = AnnaEnumHelpers.GetEnumObjectByValue<possibleGameStatesRelatedToAnna>(0);

	// TODO: initialize to actual marker names
	// String constants for the marker names
	string OUTSIDE_DOOR_MARKER = "outside";
	string INSIDE_DOOR_MARKER = "inside";

	/********** MARKER CALIBRATION **********/
	// Keep track of positioned markers because there's no way we can track all markers in 1 frame due to camera FOV and 
		// because that's generally a bad assumption to make anyway
	// TODO: Properly initialize camera object?
	public Camera hololensLocation; // Initalize camera object
	public int NUMBER_OF_MARKERS = 2; // Number of markers constant
	public List<string> calibratedMarkers; // Keep track of marker names
	public MarkerEventHandler outsideMarker, insideMarker; // Optimization for current use

	/********** AUDIO **********/
	/*
	* Set these clips somewhere
	* More general solutions needs to be implemented, especially for multiple characters
	* eg. Each actor should have an array like this and the controller will tell them all to activate (timing would be an issue)
	* 
	* Consider adding an array of audio sources with length = possibleGameStatesRelatedToAnna.length so that the narrator and Anna can swap talking.
	* This solution would not work for multiple actors in the same state
	*/
	// TODO: initialize this to something
	public List<AudioClip> audioClipsCorrespondingToEachOfAnnasStates; // Same length as possibleGameStatesRelatedToAnna
	public AudioSource annasAudioSource; //reference to the clip attached to the lipsync character itself

	/********** BOOLEANS **********/
	/*
	* Set to true AFTER Anna finishes talking so the user doesn't leave before she's finished. We basically LOCK the game state until she's done talking.
	* If this is TRUE and the user leaves without looking at the marker, then NOTHING should happen.
	* They MUST look at the marker to start the next part.
	* Exists to guarantee that they leave the room.
	*/
	bool waitingForUserToLeaveRoom=false;
	/*
	* Will be set to true whenever Anna finishes her speech and the user leaves the room.
	* This should never be true at the same time as waitingForUserToLeaveRoom (they are both false while Anna is talking)
	* If the user enters the room without looking at the marker, then NOTHING should happen. They MUST look at the marker to start the next part.
	*/
	bool waitingForUserToEnterRoom=true;
	/*
	* Will be set to true whenever Anna is talking
	* This is done to ensure that the next marker cannot be accessed while Anna is talking, thus causing problems.
	*/
	bool currentlyPlayingAClip=false;
	
	// Use this for initialization
	void Start () {
		// Not necessary, consider removing
	}
	
	// Update is called once per frame
	// DON'T TRY TO HANDLE EVERYTHING IN 1 FRAME
	// Change state, then the new state will be handled in the NEXT frame
	// NOTE: NEVER use while loops in update. Use IF statements to check for state changes every frame.
	void Update () {
		// For this functionality to start, ALL tracking should be completed and thus vuforia is no longer needed
		// Consider having tooltips to get the user to look around for the markers...otherwise instruct them in real life
		// Assume markers are positioned and handle game states.
		if (calibratedMarkers.Count >= NUMBER_OF_MARKERS) {
			/************ STATE FLOW ***************/
			// START -> Wait for user to enter room -> anna state 0 -> wait for exit then enter room -> anna state 1....

			// Only check for markers AFTER she's done talking (check in the audioclip (isPlaying) for the character)
			if (currentlyPlayingAClip){
				if (!annasAudioSource.isPlaying){
					currentlyPlayingAClip = false;
					waitingForUserToLeaveRoom = true;
				}

				// Else: Anna is talking
			}
			else{
				// Get current vector of Hololens Camera
				Vector3 cameraLocation = hololensLocation.gameObject.transform.position;

				if(waitingForUserToEnterRoom) {
					Debug.Log("Searching for marker to enter the room.");

					// Get vector for marker
					Vector3 markerLocation = insideMarker.gameObject.transform.position;

					// Documentation for Vector3.Angle: https://docs.unity3d.com/ScriptReference/Vector3.Angle.html
					// Calculates angle between cameraLocation vector and markerLocation vector
					float angle = Vector3.Angle(cameraLocation, markerLocation);

					// Use absolute value to ensure that you are looking either left or right of the markers
					if(Math.Abs(180 - angle) < 15.0f) {
						// Enter room immediately after exiting, no other state between right now.
						// Will need some fix for multiple rooms
						waitingForUserToLeaveRoom = false;
						waitingForUserToEnterRoom = false;
					}
				} else if(waitingForUserToLeaveRoom) {
					Debug.Log("Searching for marker to leave the room.");

					// Get vector for marker
					Vector3 markerLocation = outsideMarker.gameObject.transform.position;

					// Documentation for Vector3.Angle: https://docs.unity3d.com/ScriptReference/Vector3.Angle.html
					// Calculates angle between cameraLocation vector and markerLocation vector
					float angle = Vector3.Angle(cameraLocation, markerLocation);

					// Use absolute value to ensure that you are looking either left or right of the markers
					if(Math.Abs(180 - angle) < 15.0f) {
						// Enter room immediately after exiting, no other state between right now.
						// Will need some fix for multiple rooms
						waitingForUserToLeaveRoom = false;
						waitingForUserToEnterRoom = true;
					}
				} else {
					// User entered room and we can play current state
					if ((int) currentGameState < Enum.GetNames(typeof(possibleGameStatesRelatedToAnna)).Length) {
						// TODO: change vector so it plays at the character's mouth
						AudioSource.PlayClipAtPoint(audioClipsCorrespondingToEachOfAnnasStates[(int)currentGameState], new Vector3(0,0,0));

						// Set new game state
						currentGameState = AnnaEnumHelpers.GetEnumObjectByValue<possibleGameStatesRelatedToAnna>((int)currentGameState+1);
						currentlyPlayingAClip = true;
					}

					// Else: end of game	
				}
			}
			// Marker "tracking" will need to be simulated since we can't use vuforia AND do screen mirroring on the hololens.
			// We can use 3D angle calculations to determine if the user is more or less looking at the virtual marker; (cos(THETA)=(a dot b)/(|a|*|b|), with a = forward vector of camera
				// and b as the vector from camera location to a marker.
			// I'm not sure if this is computationally cheaper than doing legit tracking... I would imagine that it is.
		}
	}

	// This function will be called BY the markers, which will all have a reference to this GameStateController object (which there should only be 1 of).
	// In gamedev, we generally don't let objects handle themselves in ways that affect the entire game world. the controller should do this. This also allows us to generalize
	// To a networked setup so that fewer datablocks need to be passed/RPCed
	// The marker class is currently found in Assets -> MarkerEventHandler.cs
	public void updateMarkerTrackedStated(MarkerEventHandler markerToUpdate){
		if (!calibratedMarkers.Contains(markerToUpdate.thisMarkersName)){
			// Check for marker positions and try to position them in the game world
			// Add it to the calibratedMarkers array. 
			// For optimization purposes (and to prevent vuforia from crashing), turn off the tracking for this marker. marker tracking will be some of the most overhead we'll see
			// We'll need to use 1 marker of our choice to position virtual objects, rooms, navmesh, etc.

			calibratedMarkers.Add(markerToUpdate.thisMarkersName);

			if(markerToUpdate.thisMarkersName == OUTSIDE_DOOR_MARKER) {
				outsideMarker = markerToUpdate;
			} else if(markerToUpdate.thisMarkersName == INSIDE_DOOR_MARKER) {
				insideMarker = markerToUpdate;
			}
		}

		// Else: something went wrong...tracking probably wasn't disabled for the marker
	}

	// Borrowed from https://stackoverflow.com/questions/16464219/how-to-get-enum-object-by-value-in-c
	public static class AnnaEnumHelpers {
		public static T GetEnumObjectByValue<T>(int valueId) {
			return (T) Enum.ToObject(typeof (T), valueId);
		}
	}
}
