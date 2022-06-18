/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:16:18 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 14:46:36 by macbookprom      ###   ########.fr       */
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
    bool operator>(const Fixed f);
    bool operator<(const Fixed f);
    bool operator>=(const Fixed f);
    bool operator<=(const Fixed f);
    bool operator==(const Fixed f);
    bool operator!=(const Fixed f);
    Fixed operator+(const Fixed &f) const;
    Fixed operator-(const Fixed &f) const;
    Fixed operator*(const Fixed &f) const;
    Fixed operator/(const Fixed &f) const;
    Fixed operator--();
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed max(Fixed &var1, Fixed &var2);
    static Fixed const max(const Fixed &var1, const Fixed &var2);
    static Fixed min(Fixed &var1, Fixed &var2);
    static Fixed const min(const Fixed &var1, const Fixed &var2);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};
std::ostream &operator<<(std::ostream &stream, const Fixed &f);

#endif