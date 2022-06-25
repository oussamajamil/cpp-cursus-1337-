/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:07:48 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 15:28:23 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c;
	ScavTrap s1("oussama");
	ScavTrap s2(s1);

	s2.attack("aaaa");
	s2.beRepaired(2);
	s2.guardGate();
	
}
