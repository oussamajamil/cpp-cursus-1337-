/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:33:30 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/23 03:53:52 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

int main(int argc ,char **agv){
	if(argc == 1)
	{
		std::cout<< "aargument invalide"<<std::endl;
		return 0;
	}
	(void)argc;
	Convert c;
	c.CheckType(agv[1]);
	c.AfficherType();;
}
