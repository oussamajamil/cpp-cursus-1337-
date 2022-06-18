/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:18:06 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 15:54:54 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}
ClapTrap::~ClapTrap() {}

/// geters
std::string ClapTrap::getName()
{
    return this->_name;
}
unsigned int ClapTrap::getHitPoints()
{
    return this->_HitPoints;
}
unsigned int ClapTrap::getEnergyPoints()
{
    return this->_EnergyPoints;
}
unsigned int ClapTrap::getAttackDamage()
{
    return this->_AttackDamage;
}
// seters

void setName(std::string name)
{
}