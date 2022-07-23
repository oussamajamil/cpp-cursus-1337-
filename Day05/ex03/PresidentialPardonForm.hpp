/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:40:29 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 12:08:05 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_
#define _PRESIDENTIALPARDONFORM_

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm:public Form
{
private:
	std::string m_target;
public:
 	PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &PPF);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &PPF);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &B) const;
        void action(Bureaucrat const &B) const;
};
#endif
