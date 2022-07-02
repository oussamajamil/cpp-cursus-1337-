/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:19:28 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/26 11:36:55 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal(){
	this->SetType("snake");
	std::cout << "default contractor Animal" << std::endl;
}
Animal::~Animal(){
	std::cout << "deconstractor Animal" << std::endl;
}
Animal::Animal(const Animal &A){
	std::cout << "copy contractor Animal"<<std::endl;
	*this = A;
}

std::string Animal::GetType()const
{
	return this->_type;
}
void Animal::SetType(const std::string T){
	this->_type = T;
}

Animal &Animal::operator=(const Animal &A){
	std::cout  << "Copy assignment  to Animal" << std::endl;
	if(this != &A){
		this->_type = A._type;
	}
	return(*this);
}
void Animal::makeSound()const {
	std::cout << "sssssssssssssss" << std::endl;
}


