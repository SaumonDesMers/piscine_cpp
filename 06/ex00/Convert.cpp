#include "Convert.hpp"

Convert::Convert(std::string const & str) {
	(void)str;
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
