#ifndef __BRAIN__
#define __BRAIN__
#include <iostream>
class Brain{
    private:
        std::string ideas [100];
    public: 
    Brain();
    Brain(const Brain &B);
    Brain &operator=(const Brain &B);
    std::string getIdea(int i)const;
	void setIdea(int i,std::string brn);
    ~Brain();
};
#endif