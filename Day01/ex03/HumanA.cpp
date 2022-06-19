/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:09:18 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/19 13:09:19 by ojamil           ###   ########.fr       */
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


