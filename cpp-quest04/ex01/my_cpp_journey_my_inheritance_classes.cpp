#include <iostream>
#include <string.h>

class Mammal{

    public:
        int life;
        Mammal(){
            life = 10;
            std::cout << "Constructor Mammal" << std::endl;
        }

        int getLife()const{
            return this->life;
        }
};

class Human : public Mammal{

    public:
        std::string name;
        Human(const std::string &name){
            life = 100;
            this->name = name;
            std::cout << "Constructor Human" << std::endl;
        }

        std::string getName()const{
            return this->name;
        }
};
