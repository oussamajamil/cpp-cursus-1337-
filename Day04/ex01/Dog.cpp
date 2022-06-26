/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:03:35 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/25 15:00:00 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(){
	this->SetType("Dog");
	std::cout << "default contractor Dog" << std::endl;
	this->brain = new Brain();
}
Dog::Dog(const Dog &A){
	std::cout << "copy contractor Dog"<<std::endl;
	this->brain = new Brain();
	*this = A;
}
Dog &Dog::operator=(const Dog &A){
	std::cout  << "Copy assignment  to Dog" << std::endl;
	if(this != &A){
		this->SetType(A.GetType());
		*this->brain = *A.getBrain();
	}
	return(*this);
}

Dog::~Dog(){
	std::cout << "deconstractor Dog"<< std::endl;
	std::cout << "free location brain" << std::endl;
	delete brain;
}
void Dog::makeSound()const{
	std::cout << "haw haw haw"<< std::endl;
}

Brain *Dog::getBrain() const{
	return this->brain;
}
void Cat::setBrain(const Brain *b){
	this->brain =b;
}