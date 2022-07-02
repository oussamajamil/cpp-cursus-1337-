/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:01:03 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:26:47 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Bureaucrat__
#define __Bureaucrat__

#include <iostream>
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char* what() const throw(){
			return "grade superior 0" ;
		}
	};
		class GradeTooLowException:public std::exception
	{
		public:
		virtual const char* what() const throw(){
			return "grade inferior 151" ;
		}
	};
	Bureaucrat();
	Bureaucrat(const std::string name,int grade);
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat &operator =(const Bureaucrat &b);
	std::string getName() const;
	void addGrade();
	void upgrade();
	void downgrade();
	int getGarde() const;
	void setGrade(int gr);
	~Bureaucrat();
};
std::ostream &operator<<(std::ostream &stream, const Bureaucrat &f);

#endif
