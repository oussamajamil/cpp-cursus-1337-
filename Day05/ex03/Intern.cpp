/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:30:13 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:34:52 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern &I){
    *this = I;
}

Intern &Intern::operator=(const Intern &I){
    (void)I;
    return *this;
}

Intern::~Intern(){
}

Form    *Intern::makeForm(const std::string &name, const std::string &target){
    Form *F[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
    };
    std::string choice[3] = {
        "shrubbery request",
        "robotomy request",
        "presidential request",
    };
    for (int i = 0; i < 3; i++)
    {
        if (name == choice[i])
        {
            for (int j = 0 ; j < 3; j++)
                if (j != i)
                    delete F[j];
            return F[i];
        }
    }
    for (int j = 0 ; j < 3; j++)
        delete F[j];
    std::cout << "no Form by the name [ " + name + " ] exist" << std::endl;
            return 0;
}
