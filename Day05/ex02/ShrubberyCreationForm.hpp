/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:58:31 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:10:22 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SHRUBBERYCREATIONFORM_
#define _SHRUBBERYCREATIONFORM_

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm:public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &SCF);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &SCF);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &B) const;
	virtual void action(Bureaucrat const &B)const;
};
#endif
