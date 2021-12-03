#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>

class Convert {

	private:

		// Attributes
		char			charValue;
		std::string		charString;
		int				intValue;
		std::string		intString;
		float			floatValue;
		std::string		floatString;
		double			doubleValue;
		std::string		doubleString;

		long double		buffer;

		enum e_type {
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};

		// Internal functions
		e_type		detectType(std::string const & str);

	public:

		// Constructors and destructor
		Convert(std::string const & str = "");
		Convert(const Convert &src);
		~Convert();

		// Operator overloads
		Convert&	operator=(const Convert &src);

		// Member functions
		void		print();

};

#endif // CONVERT_HPP