/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:52:41 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 11:52:53 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_
#define _ROBOTOMYREQUESTFORM_

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &RRF);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &RRF);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const &B) const;
        void action(Bureaucrat const &B) const;
};

#endif
