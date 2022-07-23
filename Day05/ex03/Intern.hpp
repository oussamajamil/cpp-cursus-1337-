/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:30:27 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:35:05 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_
#define _INTERN_

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern
{
    private:
        /* data */
    public:
        Intern();
        Intern(const Intern &I);
        Intern &operator=(const Intern &I);
        ~Intern();
        Form    *makeForm(const std::string &name, const std::string &target);
};

#endif /* _INTERN_ */
