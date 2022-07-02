#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(){
	this->SetType("snake");
	std::cout << "default contractor WrongAnimal" << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "deconstractor WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &A){
	std::cout << "copy contractor WrongAnimal"<<std::endl;
	*this = A;
}

std::string WrongAnimal::GetType()const
{
	return this->_type;
}
void WrongAnimal::SetType(const std::string T){
	this->_type = T;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &A){
	std::cout  << "Copy assignment  to WrongAnimal" << std::endl;
	if(this != &A){
		this->_type = A._type;
	}
	return(*this);
}
void WrongAnimal::makeSound()const{
	std::cout << "sssssssssssssss" << std::endl;
}


