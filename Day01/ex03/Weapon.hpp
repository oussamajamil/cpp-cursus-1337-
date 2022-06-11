/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:45:07 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 12:28:05 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		std::string getType() const;
		void setType(std::string type);
};
#endif
