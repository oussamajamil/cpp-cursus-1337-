/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:07:37 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 15:07:40 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c;
	ClapTrap d("oussama");
	std::cout << "attack damage:"<< c.getAttackDamage()<<std::endl;
	std::cout << "hit point:"<< c.getHitPoints()<<std::endl;
	std::cout << "energy point:"<< c.getEnergyPoints()<<std::endl;
	c = d;
	c.setName("omar");
	std::cout << "Name: "<< c.getName() << std::endl;
	c.attack("oussama");
	c.takeDamage(4);
	c.beRepaired(2);
	std::cout << "attack damage:"<< c.getAttackDamage()<<std::endl;
	std::cout << "hit point:"<< c.getHitPoints()<<std::endl;
	std::cout << "energy point:"<< c.getEnergyPoints()<<std::endl;

}
