/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:03:08 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:23:29 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", false, 145, 137){
    std::cout << "Default constructor for ShrubberyCreationForm" << std::endl;
    this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", false, 145, 137){
    std::cout << "Default constructor for ShrubberyCreationForm" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &SCF){
    std::cout << "Copy constructor for ShrubberyCreationForm" << std::endl;
    *this = SCF;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &SCF){
    std::cout << "Copy Assignment constructor for ShrubberyCreationForm" << std::endl;
    (void)SCF;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &B) const{
    Form::execute(B);
}

void ShrubberyCreationForm::action(Bureaucrat const &B) const{
	(void)B;
    std::string  fileName =  this->_target + "_shrubbery";
    std::ofstream myFile(fileName);
    myFile << "              .     .  .      +     .      .          .\n";
    myFile << "     .       .      .     #       .                .\n";
    myFile << "        .      .         ###            .      .      .\n";
    myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    myFile << "          .      . \"####\"###\"####\"  .\n";
    myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    myFile << "  .             \"#########\"#########\"        .        .\n";
    myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    myFile << "                .\"##\"#####\"#####\"##\"           .      .\n";
    myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    myFile << "            .     \"      000      \"    .     .\n";
    myFile << "       .         .   .   000     .        .       .\n";
    myFile << ".. .. ..................O000O........................ ......\n";

	 myFile << "              .     .  .      +     .      .          .\n";
    myFile << "     .       .      .     #       .                .\n";
    myFile << "        .      .         ###            .      .      .\n";
    myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    myFile << "          .      . \"####\"###\"####\"  .\n";
    myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    myFile << "  .             \"#########\"#########\"        .        .\n";
    myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    myFile << "                .\"##\"#####\"#####\"##\"           .      .\n";
    myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    myFile << "            .     \"      000      \"    .     .\n";
    myFile << "       .         .   .   000     .        .       .\n";
    myFile << ".. .. ..................O000O........................ ......\n";
	 myFile << "              .     .  .      +     .      .          .\n";
    myFile << "     .       .      .     #       .                .\n";
    myFile << "        .      .         ###            .      .      .\n";
    myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    myFile << "          .      . \"####\"###\"####\"  .\n";
    myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    myFile << "  .             \"#########\"#########\"        .        .\n";
    myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    myFile << "                .\"##\"#####\"#####\"##\"           .      .\n";
    myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    myFile << "            .     \"      000      \"    .     .\n";
    myFile << "       .         .   .   000     .        .       .\n";
    myFile << ".. .. ..................O000O........................ ......\n";
    myFile.close();
}

    ShrubberyCreationForm::~ShrubberyCreationForm(){
		std::cout <<"deconstructor ShrubberyCreationForm"<<std::endl;
	}
