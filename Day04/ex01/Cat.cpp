/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:50:19 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/26 10:46:28 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"


Cat::Cat(){
	this->SetType("Cat");
	std::cout << "default contractor Cat" << std::endl;
	this->brain = new Brain();
}
Cat::Cat(const Cat &A){
	std::cout << "copy contractor Cat"<<std::endl;
	this->brain = new Brain();
	*this = A;
}
Cat &Cat::operator=(const Cat &A){
	std::cout  << "Copy assignment  to Cat" << std::endl;
	if(this != &A){
		this->SetType(A.GetType());
		*this->brain = *A.brain;
	}
	return(*this);
}
Cat::~Cat(){
	std::cout << "deconstactor Cat" << std::endl;
	delete brain;
	std::cout << "free brain" << std::endl;
}
void Cat::makeSound()const{
	std::cout << "myaw  myaw myaw"<<std::endl;
}

void    Cat::getIdeas()const
{
    for (int i = 0; i < 100 ; i++)
    {
        std::cout << " Idea " << i << "the Cat: " << this->brain->getIdea(i) << std::endl;
    }
}

void    Cat::setIdea(int i, std::string idea)
{
	if(i < 0 || i >= 100)
	{
		std::cout <<"idea < 100 and >= 0" <<std::endl;
		return ;
	}
    this->brain->setIdea(i, idea);
}
