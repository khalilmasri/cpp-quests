#include <iostream>
#include <string.h>

class Plastic{

    private:
        std::string name;

    public:

        Plastic(const std::string& name){
            setName(name);
            std::cout << "New plastic: " << getName() << std::endl;
        }
        ~Plastic(){
            std::cout << "Recycling plastic: " << getName() << std::endl;
        }

        void setName(const std::string& name){
            this->name = name;
        }

        std::string getName() const{
            return this->name;
        }
};

Plastic* create_plastic(const std::string& name){
    Plastic* newP = new Plastic(name);

    return newP;
}

