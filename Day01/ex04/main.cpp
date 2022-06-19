/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:03:10 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/11 17:28:50 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main(){
	std::string s1;
	std::string s2;
	std::string filename;
	std::string countent;
	std::string line;
	int pos;

	std::cout << "tapez s1:" <<std::ends;
	std::cin >> s1;
	std::cout << "tapez s2:" <<std::ends;
	std::cin >> s2;
	std::cout << "tapez name file:" <<std::ends;
	std::cin >> filename;

	std::ifstream MyReadFile(filename);
	if(!MyReadFile)
	{
		std::cout << "fichier intorvable" << std::endl;
	}
	else
	{
		std::ofstream MyFile(filename+".replace");
		while (getline(MyReadFile,line))
		{
			if(s1 != s2)
			while (line.find(s1) != -1)
			{
				pos = line.find(s1);
				 line.insert(pos,s2);
				 line.erase(pos+s2.length(),s1.length());
			}
			MyFile << line << std::endl;
		}

	}
}
