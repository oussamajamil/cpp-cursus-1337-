/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:03:39 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:50:57 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG__
#define __DOG__
#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &A);
	Dog &operator = (const Dog &a);
	virtual void makeSound()const;
	Brain *getBrain()const;
	void setBrain(const Brain &b);
	virtual ~Dog();
};
#endif

