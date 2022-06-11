/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:06:58 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/05 12:42:41 by ojamil           ###   ########.fr       */
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
