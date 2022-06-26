#ifndef __WRONGANIMAL__
#define __WRONGANIMAL__
#include <iostream>
class WrongAnimal{
    private:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &A);
        WrongAnimal &operator = (const WrongAnimal &a);
        std::string GetType()const;
        void SetType(const std::string T);
        void makeSound()const;
        ~WrongAnimal();
};
#endif