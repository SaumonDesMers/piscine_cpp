#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>

class Convert {

	private:

		// Attributes
		char			charValue;
		int				intValue;
		float			floatValue;
		double			doubleValue;

		// Internal functions

	public:

		// Constructors and destructor
		Convert(std::string const & str = "");
		Convert(const Convert &src);
		~Convert();

		// Operator overloads
		Convert&	operator=(const Convert &src);

		// Member functions

};

#endif // CONVERT_HPP