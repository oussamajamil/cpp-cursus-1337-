/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:00:57 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 11:15:09 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("test"){
	std::cout << "Initial constructor Bureaucrat " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name,int g):_name(name){
	std::cout << "params constructor Bureaucrat " << std::endl;
		if(g <= 0)
		throw GradeTooHighException();
	else if(g > 150)
		throw GradeTooLowException();
	else
	this->_grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b){
	std::cout << "Copy constructor for Bureaucrat" << std::endl;
	*this = b;
}

Bureaucrat &Bureaucrat::operator =(const Bureaucrat &b){
	  std::cout << "Copy Assignment constructor for Bureaucrat" << std::endl;
	if(this!=&b){
		this->_grade = b._grade;
	}
	return (*this);
}
Bureaucrat::~Bureaucrat(){
	std::cout << "deconstructor for  Bureaucrat" <<std::endl;
}
std::string Bureaucrat::getName()const{
	return this->_name;
}

int Bureaucrat::getGarde()const{
	return this->_grade;
}

void Bureaucrat::setGrade(int g){
	if(g <= 0)
		throw GradeTooHighException();
	else if(g > 150)
		throw GradeTooLowException();
	else
		this->_grade = g;
}

void    Bureaucrat::signForm(Form &F){
    if (this->_grade <= F.getgradSign() && !F.getSign())
        std::cout << this->_name + " signed " + F.getName() << std::endl;
    else {
        if (this->_grade > F.getgradSign())
            std::cout << this->_name + " couldn’t sign " + F.getName() + " because his grade is low" << std::endl;
        if (F.getSign())
            std::cout << this->_name + " couldn’t sign " + F.getName() + " because it's already Signed" << std::endl;
    }
}
void    Bureaucrat::executeForm(const Form &F) const {
    if (this->_grade <= F.getgradExecute() && F.getSign())
        std::cout << this->_name + " executed " + F.getName() << std::endl;
    else {
        if (this->_grade > F.getgradExecute())
            std::cout << this->_name + " couldn’t execute " + F.getName() + " because his grade is low" << std::endl;
        else if (!F.getSign())
            std::cout << this->_name + " couldn’t execute " + F.getName() + " because it's not Signed" << std::endl;
    }
}
std::ostream &operator<<(std::ostream &stream, const Bureaucrat &f){
	stream << f.getName() << "  bureaucrat grade   " <<  f.getGarde();
	return stream;
}
void Bureaucrat::downgrade(){
	if(this->_grade + 1 > 150) throw GradeTooLowException();
	this->_grade++;
}
void Bureaucrat::upgrade(){
	if(this->_grade-1 <= 0) throw GradeTooHighException();
	this->_grade--;
}
