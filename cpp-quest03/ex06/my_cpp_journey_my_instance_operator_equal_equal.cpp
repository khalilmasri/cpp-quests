#include <iostream>
#include <string.h>

class MyFirstClass{

    private:

        std::string name;
        static int value;

    public:

        MyFirstClass(const std::string&name){
            setName(name);
            my_cpp_journey_my_instance_lifecycle();
        };

        ~MyFirstClass(){
            std::cout << "Good bye " << getName() << std::endl; 
        }

        void setName(const std::string &name){
            this->name =name;
        }

        static int getInt(){
            return value;
        }

        const std::string& getName()const{
            return this->name;
        }

        void my_cpp_journey_my_instance_lifecycle(){
            std::cout << "Hello " << getName() << std::endl;
        }


        bool operator == (MyFirstClass& other){
            if(name == other.name)
                return true;
            return false;
        }

        bool operator != (MyFirstClass& other){
            if(name != other.name)
                return true;
            return false;
        }


};

// dest = "hello" 
// src = " world"
// char* newStr = new char[strlen(dest) + strlen(world)];
// i = 5
// j = 0
// dest[i+j] = " "
// i = 5
// j = 1
// dest[i+j] = "w"
// "hello world"

