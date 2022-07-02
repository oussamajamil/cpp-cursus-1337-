/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:02:26 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:44:29 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Form__
#define __Form__

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _sign;
		const int _gradsign;
		const int _gradexecute;
	public:
	Form();
	Form(std::string name,bool s,int grad,int gradex);
	Form(const Form &f);
	~Form();
	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char* what() const throw(){
			return "form grade superior 0" ;
		}
	};
	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char* what() const throw(){
			return "form grade inferior 151" ;
		}
	};
	//getters
	int getgradSign()const;
	int getgradExecute()const;
	bool getSign() const;
	std::string name() const;

	//setters
	void setSign(const bool s);
	void beSigned(Bureaucrat &b);
};
#endif
