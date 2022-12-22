#include <iostream>
#include <vector>
#include <string>

#include "Todo.h"
#include "TodoList.h"
#include "Promps.h"

//std::string version = "v1.0.0";


int main()
{
	char inputOption;
	//std::cout << "Todos - " << version << std::endl;
	//std::cout << std::endl << std::endl;
	Prompts::PrintHeader();

	std::vector<Todo> todos{
		Todo("Todo Item 1"),
		Todo("Todo Item 2"),
		Todo("Todo Item 3"),
		Todo("Todo Item 4")
	};

	TodoList todoList(todos);

	while (1)
	{
		system("cls");
		todoList.Print();
		std::cout << std::endl;

		std::cout << "[a] Add" << std::endl;
		std::cout << "[t] Togggle" << std::endl;
		std::cout << "[d] Delete" << std::endl;
		std::cout << "[q] Quit" << std::endl;

		std::cout << "Choice: ";
		std::cin >> inputOption;

		if (inputOption == 'q')
		{
			std::cout << "Good bye" << std::endl;
			break;
		}

		else if (inputOption == 't')
		{
			int idInput;
			std::cout << "ID: ";
			std::cin >> idInput;
			todoList.ToggleTodoCompleted(idInput);
		}

		else if (inputOption == 'a')
		{
			std::string inputDescription;
			std::cout << "Add: ";
			std::cin.clear();
			std::cin.ignore();
			std::getline(std::cin, inputDescription);

			todoList.AddTodo(Todo(inputDescription));
		}

		else if (inputOption == 'd')
		{
			int idInput;
			std::cout << "ID: ";
			std::cin >> idInput;
			todoList.DeleteTodo(idInput);
		}
	}
}
