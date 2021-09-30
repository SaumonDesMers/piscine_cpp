#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phoneBook {
	contact list[8];
	int nb_of_contact;
	public:
	phoneBook();
	void addContact();
	void showList();
	void showContact(int);
};

#endif