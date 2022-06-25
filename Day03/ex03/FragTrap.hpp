/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:10:15 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/24 19:19:55 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__
#define __FRAGTRAP__

#include "ClapTrap.hpp"
class FragTrap:virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &f);
	FragTrap &operator=(const FragTrap &FT);
	void highFivesGuys(void);
};
#endif
