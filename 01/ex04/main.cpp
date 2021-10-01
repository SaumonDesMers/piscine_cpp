#include <iostream>
#include <fstream>
#include <string>

bool	parsing( int ac, char **av ) {

	if (ac != 4) {
		std::cout << "Wrong number of argument\n";
		return false;
	}
	if (!av[2][0] || !av[3][0]) {
		std::cout << "Empty string\n";
		return false;
	}
	return true;
}

std::string	outfileName( std::string str ) {

	std::string newStr(str);

	for (int i=0; newStr[i]; i++)
		newStr[i] -= ((newStr[i] >= 'a' && newStr[i] <= 'z') ? 32 : 0);
	newStr += ".replace";
	return newStr;
}

void	replace( std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2 ) {

	std::string	myLine;
	size_t		i;

	while (std::getline(infile, myLine)) {
		i = 0;
		while ((i = myLine.find(s1, i)) != std::string::npos) {
			myLine.erase(i, s1.size());
			myLine.insert(i, s2);
			i += s2.size();
		}
		outfile << myLine << "\n";
	}
}

int main( int ac, char **av ) {

	if (!parsing(ac, av))
		return 0;
	
	std::ifstream	infile(av[1]);
	if (!infile.is_open()) {
		std::cout << "Fail to open input file\n";
		return 0;
	}
	std::ofstream	outfile(outfileName(av[1]));
	if (!outfile.is_open()) {
		std::cout << "Fail to open output file\n";
		return 0;
	}
	replace(infile, outfile, av[2], av[3]);
	infile.close();
	outfile.close();
	return 0;
}