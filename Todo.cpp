#include "Todo.h"


int Todo::id = 1;

std::string m_Description;
bool m_Complete;

static int id;
int m_ID;

Todo::Todo(std::string todo)
	: m_ID(id++), m_Complete(false), m_Description("")
{
	m_Description = todo;
}

Todo::~Todo() {}

void Todo::Print()
{
	std::cout << GetId() << " " << GetCompletedString() << " " << GetDescription() << std::endl;
}

void Todo::ToggleCompleted()
{
	m_Complete = !m_Complete;
}

int Todo::GetId()
{
	return m_ID;
}

bool Todo::GetCompleted()
{
	return m_Complete;
}

void Todo::SetId(int id)
{
	m_ID = id;
}

std::string Todo::GetCompletedString()
{
	return m_Complete ? "[x]" : "[ ]";
}

std::string Todo::GetDescription()
{
	return m_Description;
}

