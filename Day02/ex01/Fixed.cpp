/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:03:02 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/16 10:47:24 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 112;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}
Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = a * (1 << this->_numberButs);
}
Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
    {
        this->_value = f.getRawBits();
    }
    return (*this);
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