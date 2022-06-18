/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:24:10 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/06 21:53:40 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon
{
private:
    std::string _type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();

    std::string &getType() const;
    void setType(std::string const &type);
};
#endif