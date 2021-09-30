#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class contact {
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	public:
	void setvar();
	const std::string& getFirstName();
	const std::string& getLastName();
	const std::string& getNickname();
	const std::string& getPhoneNumber();
	const std::string& getDarkestSecret();
};

#endif