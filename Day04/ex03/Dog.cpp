/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:03:35 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/26 10:46:44 by ojamil           ###   ########.fr       */
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
		*this->brain = *A.brain;
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
void    Dog::getIdeas()const
{
    for (int i = 0; i < 100 ; i++)
    {
        std::cout << " Idea " << i << "the Dog: " << this->brain->getIdea(i) << std::endl;
    }
}

void    Dog::setIdea(int i, std::string idea)
{
	if(i < 0 || i >= 100)
	{
		std::cout <<"idea < 100 and >= 0" <<std::endl;
		return ;
	}
    this->brain->setIdea(i, idea);
}
