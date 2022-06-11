/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:46:52 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 15:35:17 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_CPP
#define HUMANB_CPP
#include "Weapon.hpp"
class HumanB{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &w);
		void attack();
};
#endif
