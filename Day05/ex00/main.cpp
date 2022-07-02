/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:00:53 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 14:20:26 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat b;
		b.setGrade(100);
		Bureaucrat b1("oussama",1);
		Bureaucrat b2("oussama",149);
		std::cout << b << std::endl;
		std::cout << b1 <<std::endl;
		std::cout << b2 <<std::endl;
		b1.upgrade();
		b.upgrade();
		b2.downgrade();
		b2.downgrade();

		std::cout << b << std::endl;
		std::cout << b1 <<std::endl;
		std::cout << b2 <<std::endl;
	}
	catch(std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
}
