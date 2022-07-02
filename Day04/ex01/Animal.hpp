/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:15:38 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:50:11 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>
class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal &A);
	Animal &operator = (const Animal &a);
	std::string GetType()const;
	void SetType(const std::string T) ;
	virtual void makeSound()const;
	~Animal();
};
#endif
