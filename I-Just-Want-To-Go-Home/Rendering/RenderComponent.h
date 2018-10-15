#pragma once

#include <vector>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include "../EntitySystems/Entity.h"
#include "../EntitySystems/Component.h"
#include "Renderable.h"

class RenderComponent : public Component
{
// variables 
public:
	std::vector<std::shared_ptr<Renderable>> renderables; 

// functions 
public:
	RenderComponent(Entity* e) : Component(e) {};
	~RenderComponent() { printf("rendercomponent DEAD"); };

	void update(float dt) {};

	void addRenderable(std::shared_ptr<Renderable> r)
	{
		renderables.push_back(r);
	}
};

