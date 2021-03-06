#include "stdafx.h"
#include "CommandComponent.h"

CommandComponent::CommandComponent() :
	Component(ComponentType::Command)
{
}

CommandComponent::~CommandComponent()
{
}

void CommandComponent::addCommand(Command* t_command)
{
	m_commands.add(t_command);
}

void CommandComponent::popTopCommand()
{
	m_commands.popTopCommand();
}

void CommandComponent::executeTopCommand(Entity& t_entity, EventManager& t_eventManager, float t_dt)
{
	m_commands.executeTop(t_entity, t_eventManager, t_dt);
}

std::stack<Command*> CommandComponent::getCommands()
{
	return m_commands.getCommands();
}
