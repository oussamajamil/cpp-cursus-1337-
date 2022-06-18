/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:40:28 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/15 21:52:02 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__
#include <iostream>
class Fixed
{
private:
    int _value;
    static const int _numberButs = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed &operator=(const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif