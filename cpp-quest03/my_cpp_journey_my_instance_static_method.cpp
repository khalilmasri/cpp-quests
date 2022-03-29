#include <iostream>
#include <string.h>

class MyFirstClass{

    private:

        std::string str;
        static int value;

    public:

        MyFirstClass(const std::string& str){
        };

        ~MyFirstClass(){
            std::cout << "Good bye " << getName() << std::endl; 
        }

        void setName(const std::string &str){
            this->str = str;
        }

        static int getValue(){
            return value;
        }

        const std::string& getName()const{
            return this->str;
        }

        void my_cpp_journey_my_instance_variable(){
            std::cout << getName() << std::endl;
        }

        void my_cpp_journey_my_instance_lifecycle(){
            std::cout << "Hello " << getName() << std::endl;
        }

        void my_cpp_journey_my_instance_static_method(){
            std::cout << getValue() << std::endl;
        }
};

