/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:18:08 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 15:54:05 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap__
#define __ClapTrap__

#include <iostream>
class ClapTrap
{
private:
    std::string _name;
    unsigned int _HitPoints;
    unsigned int _EnergyPoints;
    unsigned int _AttackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // geters
    std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getAttackDamage();

    // seters
    void setName(std::string const n);
    void setHitPoints(unsigned int const Hitpoints);
    void setEnergyPoints(unsigned int const EnergyPoints);
    void setAttackDamage(unsigned int const AttackDamage);
};

#endif