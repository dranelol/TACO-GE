#ifndef TRANSFORM_H
#define TRANSFORM_H

using namespace std;

class Transform : public BaseComponent
{
public:
#pragma region component functions
	void Update(float delta) override;
	void Start() override;
	void Awake() override;
	void OnEnable() override;
	void OnDisable() override;
#pragma endregion
protected:
private:

};

#endif