/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:01:40 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/02 16:46:42 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form():_name("test"),_gradsign(2),_gradexecute(1){}
Form::Form(std::string name,bool s,int grad,int gradex):_name(name),_gradsign(grad),_gradexecute(gradex){
	this->_sign = s;
}

Form::Form(const Form &f):_name(f._name),_gradsign(f._gradsign),
