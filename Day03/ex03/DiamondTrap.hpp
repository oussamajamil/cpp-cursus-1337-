/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:58:03 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 18:58:04 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__
#define __DIAMONDTRAP__
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap:public FragTrap,public ScavTrap
{
private:
	std::string name;
public:
	DiamondTrap();
    DiamondTrap(std::string n);
    DiamondTrap(const DiamondTrap &DT);
    DiamondTrap &operator=(const DiamondTrap &DT);
    ~DiamondTrap();
    void    attack(std::string target);
    void    whoAmI();
};
#endif
