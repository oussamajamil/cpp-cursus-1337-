/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:31:45 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/05 10:45:32 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(){};
Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){

	std::cout << Zombie::getName()<<std::endl;
};
std::string Zombie::getName()const {
	return this->_name;
}
void Zombie::setName(std::string n){
	this->_name =n;
}
void Zombie::announce(){
	std::cout<< this->getName() + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

