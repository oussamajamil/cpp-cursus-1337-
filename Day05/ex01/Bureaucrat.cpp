/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:00:57 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:26:28 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("test"){}

Bureaucrat::Bureaucrat(const std::string name,int g):_name(name){
		if(g <= 0)
		throw GradeTooHighException();
	else if(g > 150)
		throw GradeTooLowException();
	else
	this->_grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b){
	*this = b;
}

Bureaucrat &Bureaucrat::operator =(const Bureaucrat &b){
	if(this!=&b){
		this->_grade = b._grade;
	}
	return (*this);
}
Bureaucrat::~Bureaucrat(){}
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
