/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:18:08 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/19 11:55:10 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap__
#define __ClapTrap__

#include <iostream>
class ClapTrap
{
protected:
    std::string _name;
    unsigned int _HitPoints;
    unsigned int _EnergyPoints;
    unsigned int _AttackDamage;

public:
    ClapTrap();
	ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    // geters
    std::string getName();
     int getHitPoints();
     int getEnergyPoints();
     int getAttackDamage();
    // seters
    void setName(std::string const n);
    void setHitPoints(unsigned int const Hitpoints);
    void setEnergyPoints(unsigned int const EnergyPoints);
    void setAttackDamage(unsigned int const AttackDamage);
};
#endif
