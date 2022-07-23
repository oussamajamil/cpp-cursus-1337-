/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 01:58:52 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/23 03:52:09 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Convert__
#define __Convert__

#include <iostream>
class Convert
{
private:
	std::string type;
	bool is_empty;
	std::string val;
public:
	Convert();
	void CheckType(std::string);
	void AfficherType();
	~Convert();
};


#endif
