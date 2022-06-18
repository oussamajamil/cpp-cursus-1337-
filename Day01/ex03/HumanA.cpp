/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:38:33 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/06 22:05:12 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &Weapon) : _weapon(Weapon)
{
}
HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), _weapon(Weapon)
{
}





