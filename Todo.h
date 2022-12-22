#pragma once

#include <iostream>
#include <string>


class Todo
{
public:
	Todo(std::string todo);
	~Todo();

	void Print();
	void ToggleCompleted();
	int GetId();
	bool GetCompleted();
	void SetId(int id);

	std::string GetCompletedString();
	std::string GetDescription();

	static int id;
private:
	std::string m_Description;
	int m_ID;
	bool m_Complete;

};

