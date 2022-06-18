/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:35:59 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/06 22:04:03 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    std::string name;
public:
    HumanA(Weapon &Weapon);
    HumanA(std::string name, Weapon &Weapon);
    ~HumanA();

    void attack();
};
#endif