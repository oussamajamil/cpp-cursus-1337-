/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:31:00 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:39:45 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat oussama("sejuani",45);
        RobotomyRequestForm form1("samir");
		ShrubberyCreationForm form2("oussama");
		form2.action(oussama);
        oussama.signForm(form1);
        form1.beSigned(oussama);
        std::cout << form1;
        oussama.executeForm(form1);
        form1.execute(oussama);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
