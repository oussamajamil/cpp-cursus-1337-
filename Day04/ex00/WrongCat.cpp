#include "WrongCat.hpp"
WrongCat::WrongCat(){
	this->SetType("WrongCat");
	std::cout << "default contractor WrongCat" << std::endl;
}
WrongCat::WrongCat(const WrongCat &A){
	std::cout << "copy contractor WrongCat"<<std::endl;
	*this = A;
}
WrongCat &WrongCat::operator=(const WrongCat &A){
	std::cout  << "Copy assignment  to WrongCat" << std::endl;
	if(this != &A){
		this->SetType(A.GetType());
	}
	return(*this);
}

void WrongCat::makeSound()const{
	std::cout << "myaw myaw myaw"<< std::endl;
}
