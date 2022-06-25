/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:15:38 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/25 14:59:25 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>
class Animal
{
private:
	std::string _type;
public:
	Animal(/* args */);
	Animal(const Animal &A);
	Animal &operator = (const Animal &a);
	std::string GetType()const;
	void SetType(const std::string T) ;
	virtual void makeSound();
	~Animal();
};
#endif
