
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "default constructor  called" << std::endl;
	this->_HitPoints = 10;
	this->_EnergyPoints= 10;
	this->_AttackDamage = 0;
}


ClapTrap::ClapTrap(std::string n):_name(n){
	std::cout << "constructor params called" << std::endl;
	this->_HitPoints = 10;
	this->_EnergyPoints= 10;
	this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap() {
	 std::cout << "Destructor called" << std::endl;
}

/// geters
std::string ClapTrap::getName()
{
    return this->_name;
}
 int ClapTrap:: getHitPoints()
{
    return this->_HitPoints;
}
 int ClapTrap::getEnergyPoints()
{
    return this->_EnergyPoints;
}
 int ClapTrap::getAttackDamage()
{
    return this->_AttackDamage;
}
// seters

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

void ClapTrap::attack(const std::string& target)
{
	if(this->_EnergyPoints <= 0 ||  this->_HitPoints <= 0)
	{
		std::cout << "can not attack because you have 0 energy or 0 hit point"<<std::endl;
		return;
	}
	this->_EnergyPoints--;
	std::cout << "ClapTrap "+ this->getName() + " attaks,causing "  << this->getAttackDamage() <<" points of damage! " <<std::endl;
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
	if(this->getEnergyPoints() <= 0){
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
