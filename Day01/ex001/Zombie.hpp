/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:31:09 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/05 11:38:26 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		 	std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		//geters
		std::string getName() const;
		//seters
		void setName(std::string n);
		void announce( void );
};
Zombie * newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
