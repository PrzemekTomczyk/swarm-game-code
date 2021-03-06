#pragma once
#include "Command.h"
#include "Entity.h"
#include "EventManager.h"
class Command
{
public:
	virtual void execute(Entity& t_entity, EventManager& t_eventManager, float t_dt) = 0;
protected:
	Command() {};
};