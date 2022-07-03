/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:02:26 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/03 12:52:21 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Form__
#define __Form__

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;


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
	Form &operator=(const Form &F);
	Form(const Form &F);
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
	std::string getName() const;

	//setters
	void setSign(const bool s);
	void beSigned(Bureaucrat &b);
};
std::ostream &operator << (std::ostream &out, const Form &F);
#endif
