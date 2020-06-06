#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Machine
{
public:
	std::vector<std::string> machine;
	void ListParts()const {
		std::cout << "Product info: " << std::endl;
		for (size_t i = 0; i < machine.size(); i++) {
			if (machine[i] == machine.back()) {
				std::cout << machine[i];
			}
			else {
				std::cout << machine[i] << std::endl;
			}
		}
		std::cout << "\n\n";
	}
};
