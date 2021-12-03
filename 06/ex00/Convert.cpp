#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include "Convert.hpp"

Convert::Convert(std::string const & str) {
	e_type type = detectType(str);

	std::istringstream(str) >> buffer;

	switch (type)
	{
	case CHAR:
		charValue = str[0];
		intValue = static_cast<int>(charValue);
		floatValue = static_cast<float>(charValue);
		doubleValue = static_cast<double>(charValue);
		break;
	case INT:
		std::istringstream(str) >> intValue;
		charValue = static_cast<char>(intValue);
		floatValue = static_cast<float>(intValue);
		doubleValue = static_cast<double>(intValue);
		break;
	case FLOAT:
		if (str == "+inff")
			floatValue = std::numeric_limits<float>::infinity();
		else if (str == "-inff")
			floatValue = -std::numeric_limits<float>::infinity();
		else if (str == "nanf")
			floatValue = -std::numeric_limits<float>::quiet_NaN();
		else
			std::istringstream(str) >> floatValue;
		charValue = static_cast<char>(floatValue);
		intValue = static_cast<int>(floatValue);
		doubleValue = static_cast<double>(floatValue);
		break;
	case DOUBLE:
		if (str == "+inf")
			doubleValue = std::numeric_limits<double>::infinity();
		else if (str == "-inf")
			doubleValue = -std::numeric_limits<double>::infinity();
		else if (str == "nan")
			doubleValue = -std::numeric_limits<double>::quiet_NaN();
		else
			std::istringstream(str) >> doubleValue;
		charValue = static_cast<char>(doubleValue);
		intValue = static_cast<int>(doubleValue);
		floatValue = static_cast<float>(doubleValue);
		break;
	default:
		break;
	}
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
	if (buffer < std::numeric_limits<char>::min() || buffer > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(charValue))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << charValue << "'" << std::endl;

	if (buffer < std::numeric_limits<int>::min() || buffer > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << intValue << std::endl;

	if (buffer < std::numeric_limits<float>::min() || buffer > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(2) << "float: " << floatValue << "f" << std::endl;

	if (buffer < std::numeric_limits<double>::min() || buffer > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(2) << "double: " << doubleValue << std::endl;
}
