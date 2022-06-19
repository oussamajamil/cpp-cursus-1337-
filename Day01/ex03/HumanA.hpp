/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:47:13 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/19 13:09:29 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_CPP
#define HUMANA_CPP
#include "Weapon.hpp"
class HumanA{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string name ,Weapon &w);
		void attack();
};
#endif
