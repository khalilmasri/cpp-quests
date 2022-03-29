#include <iostream>
#include <string.h>

class MyFirstClass{

    private:

        std::string string;

    public:

        MyFirstClass(const std::string& string){
            setName(string);
            std::cout << "Hello " << getName() << std::endl;
        };

        ~MyFirstClass(){
            std::cout << "Good bye " << getName() << std::endl; 
        }

        void setName(const std::string &string){
            this->string = string;
        }

        const std::string& getName()const{
            return this->string;
        }
};

