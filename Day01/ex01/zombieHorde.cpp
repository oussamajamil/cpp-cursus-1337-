/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:46:01 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/05 11:13:44 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *z;
	if(N <=0)
	{
		std::cout << "The number is negative or equal to 0" << std::endl;
		return NULL;
	}
	try
	{
		z = new Zombie[N];
	}
	catch(const std::exception& e)
	{
		std::cout<< "error in allocation Zombie"<< std::endl;
	}
	for(int i = 0; i < N; i++)
		z[i].setName(name);
	return z;
}
