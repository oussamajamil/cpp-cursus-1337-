/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:46:54 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 15:34:40 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &w):weapon(w){
	this->name= name;
}

void HumanA::attack(){
	if(this->weapon.getType() =="")
		std::cout<< "not have Weapon" <<std::endl;
	else
	{
		std::cout << this->name << "attacks with their "<<this->weapon.getType() << std::endl;
	}
}

