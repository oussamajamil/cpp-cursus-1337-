  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:10:11 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/19 13:10:12 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "default constructor FragTrap" << std::endl;
	this->setAttackDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
}

FragTrap::FragTrap(std::string name){
	std::cout << "psrametrs construction FragTrap" <<std::endl;
	this->setName(name);
	this->setAttackDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
}

FragTrap::FragTrap(const FragTrap &F){
	std::cout << "Copy constructor FragTrap" << std::endl;
	*this = F;
}

FragTrap &FragTrap::operator=(const FragTrap &FT){
	std::cout  << "Copy assignment evolution to FragTrap" << std::endl;
	if(this != &FT){
		this->setName(FT.getName());
		this->setHitPoints(FT.getHitPoints());
		this->setEnergyPoints(FT.getEnergyPoints());
		this->setAttackDamage(FT.getAttackDamage());
	}
	return (*this);
}
FragTrap::~FragTrap(){
	std::cout << "Destructor called FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(){
	if(this->getHitPoints() > 0 &&  this->getEnergyPoints() > 0)
	{
		std::cout << this->getName() <<"is demanding a high five" << std::endl;
	}
	else
	std::cout << this->getName() << "he doesn't have energy for demand high five!!" << std::endl;
}
