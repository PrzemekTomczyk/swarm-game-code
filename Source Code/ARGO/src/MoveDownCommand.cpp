#include "stdafx.h"
#include "MoveDownCommand.h"

void MoveDownCommand::execute(Entity& t_entity, EventManager& t_eventManager, float t_dt)
{
	t_eventManager.emitEvent(PhysicsMove{ glm::vec2(0,1), t_entity });
}
