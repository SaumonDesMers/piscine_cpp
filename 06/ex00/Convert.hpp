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

		long double		buffer;
		int				precision;
		std::string		str;

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