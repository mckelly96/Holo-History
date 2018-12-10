import math
import bpy

#must be tab delimited (excel does this by default with SAVE AS->tab-delimited .txt
filename = r"C:\Users\nrewkows\Desktop\BlendshapesCatalogue.txt"
blendshapeBasedMeshNames=["teeth_baseMesh","tongue01Mesh","female1605Mesh","eyelashes03Mesh","eyebrow001Mesh"]
#read file
graph_data = open(filename, 'r').read()

#split into rows
lines = graph_data.split('\n')
numColumns=5

#get makehuman skeleton and force blender 3d environment into POSE mode
ob = bpy.data.objects['MakeHuman default skeleton']
bpy.context.scene.objects.active = ob
bpy.ops.object.mode_set(mode='POSE')
print("count2: "+str(len(lines)))
currentBlendshape=0
i=1 #current row number
#lines split into each blendshape's bone
while i < len(lines)-1: #cut out title and last newline, which is a row with 1 element
    #use euler rotations instead of quaternions
    for bone in ob.pose.bones[:]:
        bone.rotation_mode = 'ZYX'
        #reset bones to default state (the rest pose, by definition, is 1 in which all bones' rotations are 0,0,0
        bone.rotation_euler[0]=0
        bone.rotation_euler[1]=0
        bone.rotation_euler[2]=0
        
    #split into columns (\t is TAB)
    lineArray = lines[i].split('\t')
    lineArrayLen = len(lineArray)
    print("count: "+str(len(lineArray)))
    print(lineArray[0]+" "+lineArray[1]+" "+lineArray[2]+" "+lineArray[3]+" "+lineArray[4])
    
    #set bone pose (there is only 1 bone per line)
    pbone = ob.pose.bones[lineArray[1]]
    pbone.rotation_mode = 'ZYX'
    pbone.rotation_euler[0]=math.radians(float(lineArray[2]))
    pbone.rotation_euler[1]=math.radians(float(lineArray[3]))
    pbone.rotation_euler[2]=math.radians(float(lineArray[4]))
    #bpy.ops.object.mode_set(mode='OBJECT')
    
    #since we don't know beforehand whether or not the next line refers to the same blendshape 
    #or how many bone rotations make up 1 blendshape, we iterate through the next lines and apply bones until
    #the blendshape is finished (we find a line that's a different blendshape)
    checkForMoreBones=True
    currentIteration=1
    p=i #p is the original i, since i will be increased every time we find a bone belonging to the same blendshape,
    #so it doesn't read the same line twice
    while checkForMoreBones:
        lineArray2 = lines[p+currentIteration].split('\t')
        print("lineArray="+lineArray[0]+", 2="+lineArray2[0])
        if lineArray2[0]==lineArray[0]:
            print("multiple bones")
            pbone = ob.pose.bones[lineArray2[1]]
            
            pbone.rotation_mode = 'ZYX'
            pbone.rotation_euler[0]=math.radians(float(lineArray2[2]))
            pbone.rotation_euler[1]=math.radians(float(lineArray2[3]))
            pbone.rotation_euler[2]=math.radians(float(lineArray2[4]))
            
            currentIteration+=1
            global i
            i+=1
        else:
            checkForMoreBones=False
            
    for j in range(0,len(blendshapeBasedMeshNames)):
        print("processing "+str(blendshapeBasedMeshNames[j]))
        #apply armature as blendshape/shape key, re-add armature to prepare for next blendshape
        bpy.ops.object.mode_set(mode='OBJECT')
        blendshapeBasedMesh = bpy.data.objects[blendshapeBasedMeshNames[j]]
        bpy.context.scene.objects.active = blendshapeBasedMesh
        blendshapeBasedMesh.select=True
        #bpy.ops.object.mode_set(mode='OBJECT')
        bpy.ops.object.modifier_apply(apply_as='SHAPE',modifier='Armature')
        print("blendshape name="+str(lineArray[0]))
        shapekeys=blendshapeBasedMesh.data.shape_keys.key_blocks[currentBlendshape+1].name=lineArray[0]
        bpy.ops.object.modifier_add(type='ARMATURE')
        blendshapeBasedMesh.modifiers["Armature"].object=bpy.data.objects['MakeHuman default skeleton']

    currentBlendshape+=1
    i+=1
for bone in ob.pose.bones[:]:
    bone.rotation_mode = 'ZYX'
    bone.rotation_euler[0]=0
    bone.rotation_euler[1]=0
    bone.rotation_euler[2]=0