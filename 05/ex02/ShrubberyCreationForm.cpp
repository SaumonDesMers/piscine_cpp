#include <iostream>
#include <fstream>
#include <string>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form(src), target(src.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	target = src.target;
	Form::operator=(src);
	return *this;
}

void	ShrubberyCreationForm::doSomething() const {
	std::ofstream	outfile((target + "_shrubbery").c_str());
	if (!outfile.is_open()) {
		std::cout << "Fail to open output file" << std::endl;
		return ;
	}
	outfile << "	                                              .\n";
	outfile << "                                   .         ;\n";
	outfile << "      .              .              ;%     ;;\n";
	outfile << "        ,           ,                :;%  %;\n";
	outfile << "         :         ;                   :;%;'     .,\n";
	outfile << ",.        %;     %;            ;        %;'    ,;\n";
	outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
	outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
	outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'\n";
	outfile << "     `%;.     ;%;     %;'         `;%%;.%;'\n";
	outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'\n";
	outfile << "         `:%;.  :;bd%;          %;@%;'\n";
	outfile << "           `@%:.  :;%.         ;@@%;'\n";
	outfile << "             `@%.  `;@%.      ;@@%;\n";
	outfile << "               `@%%. `@%%    ;@@%;\n";
	outfile << "                 ;@%. :@%%  %@@%;\n";
	outfile << "                   %@bd%%%bd%%:;\n";
	outfile << "                     #@%%%%%:;;\n";
	outfile << "                     %@@%%%::;\n";
	outfile << "                     %@@@%(o);  . '\n";
	outfile << "                     %@@@o%;:(.,'\n";
	outfile << "                 `.. %@@@o%::;\n";
	outfile << "                    `)@@@o%::;\n";
	outfile << "                     %@@(o)::;\n";
	outfile << "                    .%@@@@%::;\n";
	outfile << "                    ;%@@@@%::;.\n";
	outfile << "                   ;%@@@@%%:;;;.\n";
	outfile << "               ...;%@@@@@%%:;;;;,..\n";
	outfile.close();
}
