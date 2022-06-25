/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:49:11 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 19:20:01 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__
#define __SCAVTRAP__

#include "ClapTrap.hpp"
class ScavTrap:virtual public ClapTrap{
	private:
		///no data all data in clap trap
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &sc);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &ST);
	void attack(const std::string& target);
	void guardGate();
};
#endif
