/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:33:00 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:50:28 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__
#include "Animal.hpp"
#include "Brain.hpp"
class Cat:public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &A);
	Cat &operator = (const Cat &a);
	void makeSound()const;
	virtual ~Cat();
	Brain *getBrain()const;
	void setBrain(const Brain &b);

};
#endif

