/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:14:40 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 17:09:31 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(){
	std::cout << "default construction ScavTrap" <<std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "psrametrs construction ScavTrap" <<std::endl;
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::ScavTrap(const ScavTrap &ST){
	std::cout << "copy  construction" <<std::endl;
	*this =ST;
}
ScavTrap &ScavTrap::operator= (const ScavTrap &ST){
	std::cout  << "Copy assignment evolution to ScavTrap" << std::endl;
   	if(this != &ST){
		this->setName(ST.getName());
		this->setHitPoints(ST.getHitPoints());
		this->setEnergyPoints(ST.getEnergyPoints());
		this->setAttackDamage(ST.getAttackDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
std::cout <<  "Destructor ScavTrap" << std::endl;
}


void ScavTrap::guardGate(){
	std::cout << this->getName()<< " now in Gate keeper mode." <<std::endl;
}


void ScavTrap::attack(const std::string& target){
	if(this->getHitPoints() <= 0 ||  this->getEnergyPoints() <= 0)
	{
		std::cout << "can not attack because you have 0 energy or 0 hit point"<<std::endl;
		return;
	}
	else
	{
		this->_EnergyPoints--;
		std::cout << "ScavTrap "+ this->getName() + " attaks " << target << ",causing "  << this->getAttackDamage() <<" points of damage! " <<std::endl;
	}
}
