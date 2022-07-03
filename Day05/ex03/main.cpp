/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:31:00 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/03 12:48:14 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"


int main(){
	try{
	Bureaucrat B("oussama",100);
	B.upgrade();
	Form F;
	B.signForm(F);
	F.beSigned(B);
	std::cout << B.getGarde() << std::endl;
	std::cout << F.getgradExecute();
	}
	catch(std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
}
