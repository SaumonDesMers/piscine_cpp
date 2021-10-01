#include "phoneBook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

phoneBook::phoneBook() : nb_of_contact(0) {}

void phoneBook::addContact() {
	if (nb_of_contact == 8)
		std::cout << "Maximum number of contact reach\n";
	else
		list[nb_of_contact++].setvar();
}

const std::string formatedString(const std::string& str) {
	if (str.size() > 10)
	{
		std::string newStr = str.substr(0, 10);
		newStr[9] = '.';
		return newStr;
	}
	else if (str.size() < 10)
	{
		std::string newStr = str;
		newStr.insert(0, 10 - str.size(), ' ');
		return newStr;
	}
	return (str);
}

void phoneBook::showList() {
	std::cout << "     index|first name| last name|  nickname\n";
	for (int i=0; i < nb_of_contact; i++)
	{
		std::cout << "         " << i << "|";
		std::cout << formatedString(list[i].getFirstName()) << "|";
		std::cout << formatedString(list[i].getLastName()) << "|";
		std::cout << formatedString(list[i].getNickname()) << "\n";
	}
}

void phoneBook::showContact(int n) {
	if (n < 0 || n > nb_of_contact - 1)
	{
		std::cout << "This is not a valid index.\n";
		return ;
	}
	std::cout << list[n].getFirstName() << "\n";
	std::cout << list[n].getLastName() << "\n";
	std::cout << list[n].getNickname() << "\n";
	std::cout << list[n].getPhoneNumber() << "\n";
	std::cout << list[n].getDarkestSecret() << "\n";
}