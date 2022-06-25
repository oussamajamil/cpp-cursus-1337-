/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:02:21 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 17:11:07 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "default constructor  called ClapTrap" << std::endl;
	this->_name ="test";
	this->_HitPoints = 10;
	this->_EnergyPoints= 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &C){
	std::cout << "Copy constructor called ClapTrap"  << std::endl;
	*this = C;
}
ClapTrap  &ClapTrap::operator = (const ClapTrap &c){
		std::cout  << "Copy assignment evolution to ClapTrap" << std::endl;
	if(this!= &c){
		this->setName(c.getName());
		this->setHitPoints(c.getHitPoints());
		this->setEnergyPoints(c.getEnergyPoints());
		this->setAttackDamage(c.getAttackDamage());
	}
	return (*this);
}
ClapTrap::ClapTrap(std::string n):_name(n){
	std::cout << "constructor params called ClapTrap" << std::endl;
	this->_HitPoints = 10;
	this->_EnergyPoints= 10;
	this->_AttackDamage = 0;
}
ClapTrap::~ClapTrap() {
	 std::cout << "Destructor called ClapTrap" << std::endl;
}
std::string ClapTrap::getName()const
{
    return this->_name;
}
unsigned int ClapTrap:: getHitPoints()const
{
    return this->_HitPoints;
}
unsigned int ClapTrap::getEnergyPoints()const
{
    return this->_EnergyPoints;
}
unsigned int ClapTrap::getAttackDamage()const
{
    return this->_AttackDamage;
}
void ClapTrap::setName(std::string const n)
{
     this->_name = n;
}
void ClapTrap::setHitPoints(unsigned int const  h)
{
    this->_HitPoints = h;
}
void ClapTrap::setEnergyPoints(unsigned int const e)
{
    this->_EnergyPoints =e;
}
void ClapTrap::setAttackDamage(unsigned int const a)
{
     this->_AttackDamage = a;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->_EnergyPoints <= 0 ||  this->_HitPoints <= 0)
	{
		std::cout << "can not attack because you have 0 energy or 0 hit point"<<std::endl;
		return;
	}
	this->_EnergyPoints--;
	std::cout << "ClapTrap "+ this->getName()  << " attacks " <<target<<"    "<< this->getAttackDamage() <<" points of damage! " <<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
	if(this->_HitPoints <= 0)
	{
		std::cout <<  "ClapTrap " << this->getName() << " has no more hit points" << std::endl;
		return;
	}
	else{
	this->_HitPoints -= amount;
	std::cout <<  "ClapTrap " << this->getName() << "you have hit point :" << this->getHitPoints()<< "after takedamage" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if(this->getEnergyPoints() <= 0 || this->getHitPoints()){
		std::cout <<"ClapTrap "+ this->getName()<< "can not beRepaired because you have 0 inerger"<<std::endl;
		return;
	}
	else
	{
		this->_EnergyPoints--;
		this->_HitPoints +=amount;
		std::cout << "ClapTrap "+ this->getName()<< "new HitPoints: " <<this->_HitPoints;
	}
}
