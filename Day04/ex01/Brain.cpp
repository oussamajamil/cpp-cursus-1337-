#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default constructor Brain" << std::endl;
}

Brain::Brain(const Brain &B){
    std::cout << "copy constructor Brain" << std::endl;
    *this =B;
}

Brain &Brain::operator=(const Brain &B){
    std::cout << "copy operators equalsn Brain"<<std::endl;
    if(this != &B)
        {
        for(int i=0; i < 100;i++){
            this->ideas[i] =B.ideas[i];
        }
    }
    return (*this);
}

std::string Brain::getIdea(int i) const{
    if(i < 0 || i >= 100)
        std::cout << "Brain Introvable" << std::endl;
    else
        return this->ideas[i];
}
void  Brain::setIdea(int i,std::string sn){
     if(i < 0 || i >= 100)
        std::cout << "Brain Introvable" << std::endl;
    else
        this->ideas[i] = sn;
}
Brain::~Brain(){
    std::cout << "Destructor Brain"<<std::endl;
}