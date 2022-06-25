/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:50:19 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/25 14:59:46 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"


Cat::Cat(){
	this->SetType("Cat");
	std::cout << "default contractor Cat" << std::endl;
}
Cat::Cat(const Cat &A){
	std::cout << "copy contractor Cat"<<std::endl;
	*this = A;
}
Cat &Cat::operator=(const Cat &A){
	std::cout  << "Copy assignment  to Cat" << std::endl;
	if(this != &A){
		this->SetType(A.GetType());
	}
	return(*this);
}

void Cat::makeSound(){
	std::cout << "haw haw haw"<<std::endl;
}
