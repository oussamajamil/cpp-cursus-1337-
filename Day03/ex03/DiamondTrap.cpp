/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:12:16 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 23:03:58 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout <<"Default constructor to DiamondTrap" << std::endl;
	this->name = "";
	this->ClapTrap::setName(name + "_clap_name");
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout <<"params constructor to DiamondTrap" << std::endl;
	this->name = name;
	this->ClapTrap::setName(name + "_clap_name");
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
}

DiamondTrap::DiamondTrap(const DiamondTrap &D){
	std::cout <<"copy constructor to DiamondTrap" << std::endl;
	*this = D;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DT){
	std::cout  <<"Copy constructor operator to DiamonTrap"<< std::endl;
    if (this != &DT)
    {
        this->name = DT.name;
        this->setName(DT.getName());
        this->setHitPoints(DT.getHitPoints());
        this->setEnergyPoints(DT.getEnergyPoints());
        this->setAttackDamage(DT.getAttackDamage());
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor to ClapTrap" <<std::endl;
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}


void DiamondTrap::whoAmI()
{
    std::cout << "my name is : " << this->name << " My ClapTrap name is : " << this->ClapTrap::getName() << std::endl;
}


