#ifndef BASECOMPONENT_H
#define BASECOMPONENT_H

using namespace std;

/**
 * @class	BaseComponent
 *
 * @brief	Base class for all scriptable components of objects
 *
 * @author	Matt
 * @date	1/2/2016
 */

class BaseComponent
{
public:

	/**
	 * @fn	BaseComponent::BaseComponent();
	 *
	 * @brief	Default constructor.
	 *
	 * @author	Matt
	 * @date	1/2/2016
	 */

	BaseComponent();

	/**
	 * @fn	BaseComponent::~BaseComponent();
	 *
	 * @brief	Destructor.
	 *
	 * @author	Matt
	 * @date	1/2/2016
	 */

	~BaseComponent();

	/**
	 * @fn	virtual void BaseComponent::Update(float delta);
	 *
	 * @brief	Updates this component
	 *
	 * @author	Matt
	 * @date	1/2/2016
	 *
	 * @param	delta	Change in time from previous update
	 */

	virtual void Update(float delta);

	/**
	 * @fn	virtual void BaseComponent::Start();
	 *
	 * @brief	Starts this object.
	 *
	 * @author	Matt
	 * @date	1/2/2016
	 */

	virtual void Start();

	/**
	 * @fn	virtual void BaseComponent::Awake();
	 *
	 * @brief	Awakens this object.
	 *
	 * @author	Matt
	 * @date	1/2/2016
	 */

	virtual void Awake();

	/**
	 * @fn	virtual void BaseComponent::OnEnable();
	 *
	 * @brief	Enables the component
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	virtual void OnEnable();

	/**
	 * @fn	virtual void BaseComponent::OnDisable();
	 *
	 * @brief	Disables the component
	 *
	 * @author	Matt
	 * @date	1/3/2016
	 */

	virtual void OnDisable();

private:

protected:

}

#endif