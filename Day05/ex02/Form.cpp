/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:01:40 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 11:44:15 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form():_name("test"),_gradsign(150),_gradexecute(150){
	std::cout << "Initial constructor Form " << std::endl;
	this->_sign = false;
}
Form::Form(std::string name,bool s,int grad,int gradex):_name(name),_sign(s),_gradsign(grad),_gradexecute(gradex){
	std::cout << "params constructor Form " << std::endl;
    if (this->_gradsign < 1 || this->_gradexecute < 1)
        throw GradeTooHighException();
    if (this->_gradsign > 150 || this->_gradexecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &f):_gradsign(150),_gradexecute(150){
	std::cout << "Copy constructor for Form" << std::endl;
    *this=f;
}

Form &Form::operator=(const Form &F){
    std::cout << "Copy Assignment constructor for Form" << std::endl;
    if (this != &F)
    {
        this->_sign = F._sign;
    }
    return *this;
}
Form::~Form(){
std::cout << "deconstructor for  Bureaucrat" <<std::endl;
}
std::string Form::getName() const{
    return this->_name;
}
bool Form::getSign() const{
    return this->_sign;
}
int Form::getgradSign() const{
    return this->_gradsign;
}
int Form::getgradExecute() const{
    return this->_gradexecute;
}

void Form::beSigned(Bureaucrat &B){
    B.signForm(*this);
    if (B.getGarde() > this->getgradSign())
        throw Form::GradeTooLowException();
    this->_sign = true;
}
void Form::execute(Bureaucrat const &B) const{
    B.executeForm(*this);
    if (!this->_sign)
        throw std::invalid_argument("the Form isn't Signed");
    if (this->_gradexecute < B.getGarde())
        throw Form::GradeTooLowException();
    this->action(B);
}
std::ostream &operator << (std::ostream &ostream, const Form &F){
    ostream << "Form " + F.getName() + " is " + (F.getSign() ? "Signed" : "not Signed")
            << " it require " + std::to_string(F.getgradSign()) + " Grade to sign"
            << " and " + std::to_string(F.getgradExecute()) + " Grade to execute";
    return ostream;
}



