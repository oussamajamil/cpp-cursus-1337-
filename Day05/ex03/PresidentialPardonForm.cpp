/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:46:45 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/11 11:49:12 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):Form("PresidentialPardonForm", false, 25, 5){
    std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
    this->m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", false, 25, 5){
    std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
    this->m_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PPF){
    std::cout << "Copy constructor for PresidentialPardonForm" << std::endl;
    *this = PPF;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &PPF){
    std::cout << "Copy Assignment constructor for PresidentialPardonForm" << std::endl;
    (void)PPF;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "Destructor for PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &B) const{
    Form::execute(B);
}

void PresidentialPardonForm::action(Bureaucrat const &B) const{
    (void)B;
    std::cout << this->m_target + ". you have been pardoned by Zaphod Beeblebrox" << std::endl;
}
