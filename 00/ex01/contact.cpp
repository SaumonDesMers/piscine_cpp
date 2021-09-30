#include <iostream>
#include <string>
#include "contact.hpp"

void contact::setvar() {
	std::cout << "first name: ";
	std::getline(std::cin, _firstName);
	std::cout << "last name: ";
	std::getline(std::cin, _lastName);
	std::cout << "nickname: ";
	std::getline(std::cin, _nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "darkest secret: ";
	std::getline(std::cin, _darkestSecret);
}

const std::string& contact::getFirstName() {
	return _firstName;
}

const std::string& contact::getLastName() {
	return _lastName;
}

const std::string& contact::getNickname() {
	return _nickname;
}

const std::string& contact::getPhoneNumber() {
	return _phoneNumber;
}

const std::string& contact::getDarkestSecret() {
	return _darkestSecret;
}
