using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

//There should only be 1 of these in the scene
public class GameStateController : MonoBehaviour {

	enum possibleGameStatesRelatedToAnna{Introduce_Anna, Anna_talks_about_A, Anna_talks_about_B, Outro}; //things like marker calibration and entering/exiting room are not included
	//because they aren't really part of the game right now...they are mostly workarounds

	possibleGameStatesRelatedToAnna currentGameState=possibleGameStatesRelatedToAnna.Introduce_Anna;
	public List<AudioClip> audioClipsCorrespondingToEachOfAnnasStates; //this array should have the same length as possibleGameStatesRelatedToAnna. some other more general solution would need
	//to be implemented for more than 1 actor (eg. each actor should have an array like this and the controller will tell them all to activate. timing would be an issue)

	//consider adding an array of audio sources with length=possibleGameStatesRelatedToAnna.length so that the narrator and anna can swap talking. 
	//this solution would not work for multiple actors in the same state

	bool markersHaveBeenCalibrated=false; //set to true when numberOfMarkersToCalibratePositionFor markers have been positioned with high confidence.

	List<string> markersThatHaveAlreadyBeenCalibrated; //keep track of positioned markers because there's no way we can track all markers in 1 frame due to camera FOV and 
	//because that's generally a bad assumption to make anyway
	public int numberOfMarkersToCalibratePositionFor=2; //this can be determined automatically using an object search function (GameObject.Find(Template<Class>)?)

	bool waitingForUserToLeaveRoom=false; //set to true AFTER anna finishes talking so the user doesn't leave before she's finished. we basically LOCK the game state until she's done talking.
	//if this is TRUE and the user leaves without looking at the marker, then NOTHING should happen. they MUST look at the marker to start the next part
	//this exists to guarantee that they leave the room.

	bool waitingForUserToEnterRoom=true; //this will be set to true whenever Anna finishes her speech and then the user leaves the room. 
	//this should never be the same as waitingForUserToLeaveRoom
	//if the user enters the room without looking at the marker, then NOTHING should happen. they MUST look at the marker to start the next part
	
	// Use this for initialization
	void Start () {
		//The controller will likely not require this because we can't really initialize anything until the markers have been positioned. consider removing this function
	}
	
	// Update is called once per frame
	void Update () { //note: NEVER use while loops in update. Use IF statements to check for state changes every frame. 
	//this is not a program based on a main() function so while loops will freeze it. 
		if (markersThatHaveAlreadyBeenCalibrated.Count>=numberOfMarkersToCalibratePositionFor && !markersHaveBeenCalibrated){ //the 2nd condition is an optimization to make sure we don't
		//run this loop every frame AFTER the markers are already handled
			markersHaveBeenCalibrated=true;
			//by now, ALL tracking should be completed and vuforia is no longer needed
			//consider having tooltips to get the user to look around for the markers...otherwise instruct them in real life
		}
		else{
			//assume markers are positioned and handle game states.
			//************STATE FLOW************** */  START>>>>>>wait for user to enter room>anna state 0>wait for exit room>wait for enter room>anna state 1>....
			//only check for markers AFTER she's done talking (check in the audioclip (isPlaying) for the character)
			
			//marker "tracking" will need to be simulated since we can't use vuforia AND do screen mirroring on the hololens.
			//we can use 3D angle calculations to determine if the user is more or less looking at the virtual marker; (cos(THETA)=(a dot b)/(|a|*|b|), with a = forward vector of camera
			//and b as the vector from camera location to a marker.
			//I'm not sure if this is computationally cheaper than doing legit tracking...i would imagine that it is. we can also just not do this EVERY frame (do every 5 frames or so)
		}
	}

	//this function will be called BY the markers, which will all have a reference to this GameStateController object (which there should only be 1 of).
	//in gamedev, we generally don't let objects handle themselves in ways that affect the entire game world. the controller should do this. This also allows us to generalize
	//to a networked setup so that fewer datablocks need to be passed/RPCed
	//The marker class is currently found in Assets>MarkerEventHandler.cs
	public void updateMarkerTrackedStated(string markerName){
		if (!markersThatHaveAlreadyBeenCalibrated.Contains(markerName)){
			markersThatHaveAlreadyBeenCalibrated.Add(markerName);
			//check for marker positions and try to position them in the game world
			//add it to the markersThatHaveAlreadyBeenCalibrated array. 
			//for optimization purposes (and to prevent vuforia from crashing), turn off the tracking for this marker. marker tracking will be some of the most overhead we'll see
			//we'll need to use 1 marker of our choice to position virtual objects, rooms, navmesh, etc.
		}
		else{
			//something went wrong...tracking probably wasn't disabled for the marker
		}

	}
}
