#include <iostream>
#include <string.h>

class MyFirstClass{

    private:

        std::string string;

    public:

        MyFirstClass(const std::string& string){
            setName(string);
            getName();
        };

        void setName(const std::string& string){
            this->string = string;
        }

        const std::string& getName()const{
            return this->string;
        }

        void my_cpp_journey_my_instance_variable(){
            std::cout << getName() << std::endl;
        }
};

