/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:27:04 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/06 21:45:18 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string ss): _type(ss) {}
Weapon::~Weapon() {}

std::string &Weapon::getType() const
{
    return this->_type;
}
void Weapon::setType(std::string const &type)
{
    this->_type = type;
}
