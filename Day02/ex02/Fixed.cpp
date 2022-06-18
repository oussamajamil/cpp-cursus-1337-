/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:35:19 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 14:52:25 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed()
{
    this->_value = 0;
}
Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &f)
{
    *this = f;
}
Fixed::Fixed(const int a)
{

    this->_value = a * (1 << this->_numberButs);
}
Fixed::Fixed(const float f)
{
    this->_value = (int)roundf((f * (1 << this->_numberButs)));
}
int Fixed::getRawBits() const
{
    return this->_value;
}
void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    if (this != &f)
    {
        this->_value = f.getRawBits();
    }
    return (*this);
}
/// comparison
bool Fixed::operator<(const Fixed f)
{
    return _value < f._value;
}
bool Fixed::operator>(const Fixed f)
{
    return _value > f._value;
}
bool Fixed::operator>=(const Fixed f)
{
    return _value >= f._value;
}
bool Fixed::operator<=(const Fixed f)
{
    return _value <= f._value;
}
bool Fixed::operator==(const Fixed f)
{
    return _value == f._value;
}
bool Fixed::operator!=(const Fixed f)
{
    return _value != f._value;
}
/////operator

Fixed Fixed::operator+(const Fixed &f) const
{
    return _value + f._value;
}
Fixed Fixed::operator*(const Fixed &f) const
{
    return this->toFloat() * f.toFloat();
}
Fixed Fixed::operator/(const Fixed &f) const
{
    return this->toFloat() / f.toFloat();
}
Fixed Fixed::operator++()
{
    ++_value;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed fs = *this;
    _value++;
    return (fs);
}
Fixed Fixed::operator--(int)
{
    Fixed fs = *this;
    _value--;
    return (fs);
}
Fixed Fixed::operator--()
{
    --_value;
    return (*this);
}
/////max
Fixed Fixed::max(Fixed &var1, Fixed &var2)
{
    if (var1 < var2)
        return var2;
    return var1;
}

Fixed const Fixed::max(Fixed const &var1, const Fixed &var2)
{
    if ((Fixed)var1 < (Fixed)var2)
        return var2;
    return var1;
}
Fixed Fixed::min(Fixed &var1, Fixed &var2)
{
    if (var1 > var2)
        return var2;
    return var1;
}

Fixed const Fixed::min(Fixed const &var1, const Fixed &var2)
{
    if ((Fixed)var1 > (Fixed)var2)
        return var2;
    return var1;
}
float Fixed::toFloat() const
{
    return ((float)this->_value / (float)(1 << this->_numberButs));
}
int Fixed::toInt() const
{
    return (this->_value / (1 << this->_numberButs));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
    stream << f.toFloat();
    return stream;
}