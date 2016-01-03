#include "../h/GLObject.h"

/**
 * @fn	GLObject::GLObject()
 *
 * @brief	Default constructor.
 *
 * @author	Matt
 * @date	1/3/2016
 */

GLObject::GLObject()
{
	components = new vector<BaseComponent*>();

	transform = new Transform();

	renderer = new Renderer();
}

/**
 * @fn	GLObject::GLObject(std::vector<BaseComponent*>* componentsList = NULL, Transform* newTransform = NULL, Renderer* newRenderer = NULL)
 *
 * @brief	Constructor with list of components to initialize object with.
 *
 * @author	Matt
 * @date	1/3/2016
 *
 * @param [in,out]	componentsList	(Optional) If non-null, list of components.
 * @param [in,out]	newTransform  	(Optional) If non-null, the new transform.
 * @param [in,out]	newRenderer   	(Optional) If non-null, the new renderer.
 */

GLObject::GLObject(std::vector<BaseComponent*>* componentsList = NULL, Transform* newTransform = NULL, Renderer* newRenderer = NULL)
{
	if (componentsList != NULL)
	{
		components = new vector<BaseComponent*>();

		for (vector<BaseComponent*>::iterator itr = componentsList->begin(); itr != componentsList->end(); itr++)
		{
			components->push_back((*itr));
		}
	}

	if (newTransform != NULL)
	{
		transform = newTransform;
	}

	if (newRenderer != NULL)
	{
		renderer = newRenderer;
	}
}

/**
 * @fn	GLObject::~GLObject()
 *
 * @brief	Destructor.
 *
 * @author	Matt
 * @date	1/3/2016
 */

GLObject::~GLObject()
{

}

/**
 * @fn	void GLObject::OnEnable()
 *
 * @brief	Enables this object and its components
 *
 * @author	Matt
 * @date	1/3/2016
 */

void GLObject::OnEnable()
{
	if (components != NULL)
	{
		for (vector<BaseComponent*>::iterator itr = components->begin(); itr != components->end(); itr++)
		{
			(*itr)->OnEnable();
		}
	}
}

/**
 * @fn	void GLObject::OnDisable()
 *
 * @brief	Disables this object and its components
 *
 * @author	Matt
 * @date	1/3/2016
 */

void GLObject::OnDisable()
{
	for (vector<BaseComponent*>::iterator itr = components->begin(); itr != components->end(); itr++)
	{
		(*itr)->OnDisable();
	}
}

/**
 * @fn	void GLObject::Awake()
 *
 * @brief	Awakens this object and its components
 *
 * @author	Matt
 * @date	1/3/2016
 */

void GLObject::Awake()
{
	for (vector<BaseComponent*>::iterator itr = components->begin(); itr != components->end(); itr++)
	{
		(*itr)->Awake();
	}
}

/**
 * @fn	void GLObject::Start()
 *
 * @brief	Starts this object and its components
 *
 * @author	Matt
 * @date	1/3/2016
 */

void GLObject::Start()
{
	for (vector<BaseComponent*>::iterator itr = components->begin(); itr != components->end(); itr++)
	{
		(*itr)->Start();
	}
}

/**
 * @fn	void GLObject::Update(float delta)
 *
 * @brief	Updates this object and its components
 *
 * @author	Matt
 * @date	1/3/2016
 *
 * @param	delta	Change in time between updates (in seconds)
 */

void GLObject::Update(float delta)
{
	for (vector<BaseComponent*>::iterator itr = components->begin(); itr != components->end(); itr++)
	{
		(*itr)->Update(delta);
	}
}

/**
 * @fn	void GLObject::AddComponent(BaseComponent* newComponent)
 *
 * @brief	Adds a component.
 *
 * @author	Matt
 * @date	1/3/2016
 *
 * @param [in,out]	newComponent	If non-null, the new component.
 */

void GLObject::AddComponent(BaseComponent* newComponent)
{
	components->push_back(newComponent);
}