#ifndef SCENE_H
#define SCENE_H

/**
@author Johnathon Theriot
**/

#include <unordered_map>
#include <vector>
#include <string>
#include "GLObject.h"
#include "SceneID.h"
#include "FrameBuffer.h"
#include "ObjectID.h"
#include "FrameID.h"
#include "../../system/h/Response.h"
#include "../../system/defaults/Constants.h"

class Scene{
public:

	Scene();
	Scene(std::string name);
	Response AddObject(GLObject * object);



private:

protected:
	SceneID * id;
	std::unordered_map<ObjectID, GLObject*, ObjectIDHasher> * objects;
	std::unordered_map<FrameID, FrameBuffer*, FrameIDHasher> * renderFrames;

};


#endif