/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:46:57 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 15:43:42 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n){
	this->name = n;
}

void HumanB::setWeapon(Weapon &w){
	this->weapon = &w;
}

void HumanB::attack(){
	if(this->weapon == NULL){
		std::cout << "Weapon undefined"<<std::endl;
	}
	else
	{
		if(this->weapon->getType() == ""){
			std::cout << "weopem withoout have a type"<<std::endl;
		}
		else
		{
			std::cout << this->name << " attacks with their " << this->weapon->getType() <<std::endl;
		}
	}
}
