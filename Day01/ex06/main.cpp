/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:06:08 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 19:09:35 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int ac,char **av){
	if(ac !=2)
		return 0;
	else{
		Harl l;
		l.complain(av[1]);
	}
	return 0;
}
