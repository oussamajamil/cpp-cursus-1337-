/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:02:56 by ojamil            #+#    #+#             */
/*   Updated: 2022/07/23 03:55:02 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstring>
Convert::Convert(){
	std::cout << "default constructor" <<std::endl;
}

Convert::~Convert(){
	std::cout << "diconstrictor" <<std::endl;
}


void Convert::CheckType(std::string res){
	int statepoint = 0;
	int statef = 0;
	int stateCaractere = 0;
	if(res.length() == 1 && res[0] == '0')
	{
		this->val = '0';
		this->type = '0';
		this->is_empty = false;
		return ;
	}
	else if(res.length() == 1 &&(res[0] < '0' || res[0] > '9'))
	{
		this->val = res[0];
		this->type ="char";
		this->is_empty = false;
		return;
	}
	for(int i = 0;i < int(res.length());i++){
		if(res[i] < '0' || res[i] > '9')
		{
			if(res[i] =='f')
				statef++;
			else if(res[i] == '.')
				statepoint++;
			else
				stateCaractere++;
		}
	}
	if(statef == 1 && res[res.length() - 1] == 'f' && statepoint == 1 && stateCaractere == 0){
		this->type = "float";
		this->is_empty = false;
		this->val = res;
		return;
	}
	else if (statepoint == 1 && stateCaractere == 0 && statef == 0)
	{
		this->type = "double";
		this->is_empty = false;
		this->val = res;
		return;
	}
	else if(statepoint == 0 && stateCaractere == 0 && statef == 0){
		this->type = "int";
		this->is_empty = false;
		this->val = res;
		return;
	}
	if(stateCaractere > 1){
		this->type = "error",
		this->is_empty = true;
		this->val = "error";
		return;
	}
}

void Convert::AfficherType(){
	if(this->type == "0" || this->type == "int")
	{
		std::cout << "char:" << "Non displayable"<<std::endl;
		std::cout << "int:" << static_cast<int>(std::stoi(this->val))<<std::endl;
		std::cout << "float:" <<static_cast<int>(std::stoi(this->val))<<".f"<<std::endl;
		std::cout << "double:" << static_cast<double>(std::stod(this->val))<<".0"<<std::endl;
	}
	else if(this->type == "error"){
		std::cout << "char:" << "impossible"<<std::endl;
		std::cout << "int:" << "impossible"<<std::endl;
		std::cout << "float:" << "nanf"<<std::endl;
		std::cout << "double:" << "nan"<<std::endl;
	}
	else if(this->type == "double"){
		std::cout << "char:" << "*"<<std::endl;
		std::cout << "int:" <<  static_cast<int>(std::stoi(this->val))<<std::endl;
		std::cout << "float:" << static_cast<float>(std::stof(this->val))<<".f"<<std::endl;
		std::cout << "double:" << static_cast<double>(std::stod(this->val))<<".0"<<std::endl;
	}
	else if(this->type=="float"){
		std::cout << "char:" << "*"<<std::endl;
		std::cout << "int:" <<  static_cast<int>(std::stoi(this->val))<<std::endl;
		std::cout << "float:" << static_cast<float>(std::stof(this->val))<<".f"<<std::endl;
		std::cout << "double:" << static_cast<double>(std::stod(this->val))<<".0"<<std::endl;
	}
	else if (this->type=="char"){
		if(!std::isprint((char)this->val[0])){
			std::cout << "char is non printibale" << std::endl;
		}
		else
		{
			std::cout<< "char:"  << this->val+"" << std::endl;
		}

	}
}
