/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:48:42 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 18:07:39 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
class Harl{

	public:
		 Harl();
		 void debug( void );
		 void info( void );
		 void warning( void );
		 void error( void );
		 void complain( std::string level );
};
#endif
