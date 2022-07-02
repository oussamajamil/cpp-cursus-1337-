/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:30:05 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/25 15:00:44 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main(){
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal *wa = new WrongAnimal();
const WrongAnimal *wc = new WrongCat();

std::cout << j->GetType() << " " << std::endl;
std::cout << i->GetType() << " " << std::endl;
j->makeSound();
i->makeSound();
meta->makeSound();

std::cout<<wa->GetType()<< " "  << std::endl;
std::cout << wc->GetType() << " "  << std::endl; 

wa->makeSound();
wc->makeSound();
return 0;
}
