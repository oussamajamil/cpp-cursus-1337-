/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookprom12020 <macbookprom12020@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:13:53 by macbookprom       #+#    #+#             */
/*   Updated: 2022/06/06 21:19:23 by macbookprom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main (){
    std::string A="HI THIS IS BRAIN";
    std::string *stringPTR = &A;
    std::string &stringREF = A;

    std::cout << "address A : " << &A << std::endl;
    std::cout << "address stringPTR : " << &stringPTR << std::endl;
    std::cout << "address stringREF : " << &stringREF << std::endl;


    std::cout << "value A : " << A << std::endl;
    std::cout << "value stringPTR : " << *stringPTR << std::endl;
    std::cout << "value stringREF : " << stringREF << std::endl;

    return 0;
}