/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:48:46 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 19:11:28 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
void Harl::debug( void ){
	std::cout << "[DEBUG]"<<std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ){
	std::cout << "[INFO]"<<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning( void ){
	std::cout << "[WARNING]"<<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error( void ){
	std::cout << "[ERROR]"<<std::endl;
	std::cout <<"This is unacceptable! I want to speak to the manager now\n"<<std::endl;
}
void Harl::complain(std::string level){
	std::string leveles[4] = {"DEBUG","INFO","WARNING","ERROR"};
	int i = 0;
	while (i < 4)
	{
		if(leveles[i] == level)
		break;
		i++;
	}

	switch (i)
	{
	case 0:
		debug();
		info();
		warning();
		error();
		break;
	case 1:
		info();
		warning();
		error();
		break;
	case 2:
		warning();
		error();
		break;
	case 3:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
