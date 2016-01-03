#ifndef RENDERER_H
#define RENDERER_H

using namespace std;

class Renderer : public BaseComponent
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