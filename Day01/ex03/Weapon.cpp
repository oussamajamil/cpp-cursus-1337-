/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:47:05 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 10:43:25 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type){
	this->_type = type;
}
Weapon::~Weapon(){}


std::string Weapon::getType() const{
	return this->_type;
}

void Weapon::setType(std::string type){
	this->_type = type;
}
