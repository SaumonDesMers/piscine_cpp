#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include "Convert.hpp"

Convert::Convert(std::string const & str) : str(str) {
	e_type	type = detectType(str);
	bool	flag = false;

	std::string validString[6] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};
	for (int i=0; i < 6; i++)
		if (str == validString[i])
			flag = true;

	if (flag && type == FLOAT)
	{
		if (str == "+inff")
			floatValue = std::numeric_limits<float>::infinity();
		else if (str == "-inff")
			floatValue = -std::numeric_limits<float>::infinity();
		else if (str == "nanf")
			floatValue = std::numeric_limits<float>::quiet_NaN();
		charValue = static_cast<char>(floatValue);
		intValue = static_cast<int>(floatValue);
		doubleValue = static_cast<double>(floatValue);
	}
	else if (flag && type == DOUBLE)
	{
		if (str == "+inf")
			doubleValue = std::numeric_limits<double>::infinity();
		else if (str == "-inf")
			doubleValue = -std::numeric_limits<double>::infinity();
		else if (str == "nan")
			doubleValue = std::numeric_limits<double>::quiet_NaN();
		charValue = static_cast<char>(doubleValue);
		intValue = static_cast<int>(doubleValue);
		floatValue = static_cast<float>(doubleValue);
	}
	else
	{
		if (type == CHAR)
			buffer = str[0];
		else
			std::istringstream(str) >> buffer;

		charValue = static_cast<char>(buffer);
		intValue = static_cast<int>(buffer);
		floatValue = static_cast<float>(buffer);
		doubleValue = static_cast<double>(buffer);
	}
	precision = 1;
	if (type == FLOAT)
		precision = str.size() - 2 - str.find_first_of('.');
	else if (type == DOUBLE)
		precision = str.size() - 1 - str.find_first_of('.');
}

Convert::Convert(const Convert &src) :
	charValue(src.charValue),
	intValue(src.intValue),
	floatValue(src.floatValue),
	doubleValue(src.doubleValue) {}

Convert::~Convert() {}

Convert&	Convert::operator=(const Convert &src) {
	charValue = src.charValue;
	intValue = src.intValue;
	floatValue = src.floatValue;
	doubleValue = src.doubleValue;
	return *this;
}

Convert::e_type		Convert::detectType(std::string const & str) {
	std::string validStringFloat[3] = {"+inff", "-inff", "nanf"};
	for (int i=0; i < 3; i++)
		if (str == validStringFloat[i])
			return FLOAT;

	std::string validStringDouble[3] = {"+inf", "-inf", "nan"};
	for (int i=0; i < 3; i++)
		if (str == validStringDouble[i])
			return DOUBLE;

	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		return CHAR;

	if (str.find_first_of('f') != std::string::npos)
		return FLOAT;

	if (str.find_first_of('.') != std::string::npos)
		return DOUBLE;

	return INT;
}

void	Convert::print() {
	
	std::cout << "buffer: " << buffer << " " << std::numeric_limits<float>::min() << std::endl;

	if (buffer < std::numeric_limits<char>::min() || buffer > std::numeric_limits<char>::max()
		|| str == "+inff" || str == "-inff" || str == "nanf" || str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(charValue))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << charValue << "'" << std::endl;

	if (buffer < std::numeric_limits<int>::min() || buffer > std::numeric_limits<int>::max()
		|| str == "+inff" || str == "-inff" || str == "nanf" || str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << intValue << std::endl;

	if (str == "+inff" || str == "-inff" || str == "nanf")
		std::cout << "float: " << str << std::endl;
	else if (str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "float: " << str << "f" << std::endl;
	else if (buffer < -std::numeric_limits<float>::max() || buffer > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(precision) << "float: " << floatValue << "f" << std::endl;
	if (str == "+inff" || str == "-inff" || str == "nanf")
		std::cout << "float: " << str.substr(0, str.size() -1) << std::endl;
	else if (str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "float: " << str << std::endl;
	else if (buffer < -std::numeric_limits<double>::max() || buffer > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(precision) << "double: " << doubleValue << std::endl;
}
