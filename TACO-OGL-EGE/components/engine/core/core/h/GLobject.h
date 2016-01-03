#ifndef GLOBJECT_H
#define GLOBJECT_H

#include <vector>

#include "../../../objectComponents/h/BaseComponent.h"
#include "../../../objectComponents/h/Renderer.h"
#include "../../../objectComponents/h/Transform.h"

using namespace std;

/**
 * @class	GLObject
 *
 * @brief	Basic scene object.
 *
 * @author	Matt
 * @date	1/3/2016
 */

class GLObject

{
public:

	/**
	 * @fn	GLObject::GLObject();
	 *
	 * @brief	Default constructor.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	GLObject();

	/**
	 * @fn	GLObject::GLObject(std::vector<BaseComponent>* componentsList = NULL, BaseComponent* transform = NULL, BaseComponent* renderer = NULL);
	 *
	 * @brief	Constructor with list of components to initialize object with.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 *
	 * @param [in,out]	componentsList	If non-null, list of components.
	 * @param [in,out]	transform	  	(Optional) If non-null, the transform.
	 * @param [in,out]	renderer	  	(Optional) If non-null, the renderer.
	 */

	GLObject(std::vector<BaseComponent*>* componentsList = NULL, Transform* transform = NULL, Renderer* renderer = NULL);

	/**
	 * @fn	GLObject::~GLObject();
	 *
	 * @brief	Destructor.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	~GLObject();

	/**
	 * @fn	void GLObject::OnEnable();
	 *
	 * @brief	Called when object is enabled.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	void OnEnable();

	/**
	 * @fn	void GLObject::OnDisable();
	 *
	 * @brief	Called when object is disabled.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	void OnDisable();

	/**
	 * @fn	void GLObject::Awake();
	 *
	 * @brief	Awakens this object.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	void Awake();

	/**
	 * @fn	void GLObject::Start();
	 *
	 * @brief	Starts this object.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	void Start();

	/**
	 * @fn	void GLObject::Update(float delta);
	 *
	 * @brief	Updates this object.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 *
	 * @param	delta	Change in time between updates (in seconds)
	 */

	void Update(float delta);

	/**
	 * @fn	void GLObject::AddComponent(BaseComponent* newComponent);
	 *
	 * @brief	Adds a component.
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 *
	 * @param [in,out]	newComponent	If non-null, the new component.
	 */

	void AddComponent(BaseComponent* newComponent);

private:

	/** @brief	The components of this object. This INCLUDES the Transform and Renderer */
	vector<BaseComponent*>* components;

	Transform* transform;

	Renderer* renderer;

protected:

};

#endif