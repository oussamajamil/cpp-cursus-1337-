/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:08:16 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/19 13:08:17 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
int main(){
	std::string A = "HI THIS IS BRAIN";
	std::string *stringPTR = &A;
	std::string& stringREF = A;

	std::cout <<  &A << std::endl;
	std::cout <<&stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout <<  A << std::endl;
	std::cout <<*stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

