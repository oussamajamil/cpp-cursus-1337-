/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:30:05 by ojamil            #+#    #+#             */
/*   Updated: 2022/06/26 11:35:04 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main(){
	 std::cout << "----------------------------------" << std::endl;
    const Animal    *meta[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            meta[i] = new Cat();
            if (meta[i] == NULL)
            {
                std::cout << "Cat Allocation Failed !" << std::endl;
                exit(1);
            }
        }
        else
        {
            meta[i] = new Dog();
            if (meta[i] == NULL)
            {
                std::cout << "Dog Allocation Failed !" << std::endl;
                exit(1);
            }
        }
    }
    std::cout << std::endl;
    std::cout << "----------------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout<< "Animal Type : " << meta[i]->GetType() << std::endl;
        meta[i]->makeSound();
        std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
        delete(meta[i]);
    std::cout << "----------------------------------" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Deep Copy Tests !" << std::endl;

    Cat *a = new Cat();
    Cat *b = new Cat();

    for (int i = 0; i < 50; i++)
        a->setIdea(i, "Time to annoy some humans ! :3");
    for (int i = 50; i < 98; i++)
        a->setIdea(i, "Time to be cute and get some food from those annoying humans ! :3" );

    *b = *a;
    delete (a);
    b->getIdeas();
    std::cout << "----------------------------------" << std::endl;
    b->setIdea(99, "Time to sleep ! :3");
    b->setIdea(100, "nope !");
    b->getIdeas();
    std::cout << "----------------------------------" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    delete (b);

return 0;
}
