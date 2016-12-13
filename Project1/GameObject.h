#pragma once

#include "BaseComponent.h"

class GameObject
{
private:
	BaseComponent * component_;
public:
	GameObject(BaseComponent * compo):component_(compo) {}
	void update()
	{
		component_->update(*this);
	}
	~GameObject();
};

