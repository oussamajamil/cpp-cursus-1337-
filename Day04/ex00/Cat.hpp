/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:33:00 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/25 13:28:20 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__
#include "Animal.hpp"

class Cat:public Animal
{
private:

public:
	Cat();
	Cat(const Cat &A);
	Cat &operator = (const Cat &a);
	void makeSound();
	~Cat();
};
#endif

