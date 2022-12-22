#pragma once

#include <iostream>



namespace Prompts {
	std::string version = "v1.0.0";

	void PrintHeader()
	{
		std::cout << "Todos - " << version << std::endl;
		std::cout << std::endl << std::endl;
	}
}
