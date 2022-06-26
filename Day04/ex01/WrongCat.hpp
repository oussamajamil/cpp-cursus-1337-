#ifndef __WRONGCAT__
#define __WRONGCAT__
#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat:public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat &A);
        WrongCat &operator = (const WrongCat &a);
        void makeSound()const;
        ~WrongCat();
};
#endif