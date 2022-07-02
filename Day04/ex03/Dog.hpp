/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:03:39 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/26 10:43:24 by ojamil           ###   ########.fr       */
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
	virtual ~Dog();
	void setIdea(int i, std::string idea);
	void getIdeas()const;
};
#endif

