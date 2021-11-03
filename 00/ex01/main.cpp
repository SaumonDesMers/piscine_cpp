#include <iostream>
#include <string>
#include <sstream>
#include "phoneBook.hpp"

bool isCorrectNb(const std::string& str) {
	for (int i=0; str[i]; i++)
		if (str[i] != '-' && !isdigit(str[i]))
			return false;
	return true;
}

int main()
{
	phoneBook phoneBook;
	std::string input ("");

	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
		{
			phoneBook.showList();
			std::getline(std::cin, input);
			if (isCorrectNb(input))
			{
				int n;
				std::stringstream(input) >> n;
				phoneBook.showContact(n);
			}
			else
				std::cout << "This is not a valid number.\n";
		}
	}
	return 0;
}