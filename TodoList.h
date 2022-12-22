#pragma once

#include <iostream>
#include <vector>
#include "Todo.h"

class TodoList
{
private: 
	std::vector<Todo> m_Todos;
public:
	TodoList();
	TodoList(std::vector<Todo>);
	~TodoList();

	void AddTodo(Todo todo);
	void Print();
	Todo FindTodo(Todo todo);
	void ToggleTodoCompleted(int id);
	void DeleteTodo(int id);
	void ReorderTodos();
};

