/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:44:36 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 00:39:39 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__
#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _value;
    static const int _numberButs = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed(const int a);
    Fixed(const float b);
    Fixed &operator=(const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};
std::ostream &operator<<(std::ostream &stream, const Fixed &f);

#endif