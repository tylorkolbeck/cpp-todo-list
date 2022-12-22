#include "TodoList.h"


TodoList::TodoList() {};
TodoList::TodoList(std::vector<Todo> todos)
	: m_Todos(todos)
{

}

TodoList::~TodoList() {};

void TodoList::AddTodo(Todo todo) {
	m_Todos.push_back(todo);
}

void TodoList::Print() {
	if (m_Todos.empty())
	{
		std::cout << "Nothing to do here..." << std::endl;
	}
	else
	{
		for (auto i = m_Todos.begin(); i != m_Todos.end(); ++i)
		{
			i->Print();
		}
	}
}

Todo TodoList::FindTodo(Todo todo) {
	for (Todo t : m_Todos)
	{
		if (t.GetId() == todo.GetId())
			return t;
	}
}

void TodoList::ToggleTodoCompleted(int id)
{
	for (auto i = m_Todos.begin(); i != m_Todos.end(); ++i)
	{
		if (id == i->GetId())
		{
			i->ToggleCompleted();
		}
	}
}

void TodoList::DeleteTodo(int id)
{
	m_Todos.erase(std::remove_if(m_Todos.begin(), m_Todos.end(), [&](Todo todo) {
		return todo.GetId() == id;
		}));

	ReorderTodos();
}

void TodoList::ReorderTodos()
{
	Todo::id = 1;

	for (Todo t : m_Todos)
	{
		t.SetId(Todo::id);
		Todo::id++;
	}
}
