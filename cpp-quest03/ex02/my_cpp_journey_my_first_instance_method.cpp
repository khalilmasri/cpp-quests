#include <iostream>
#include <string.h>

class MyFirstClass{

    public:
        MyFirstClass(const std::string& string){
            std::cout << string << std::endl;
        }

        void hello_everybody(){
            std::cout << "Hello EveryBody" << std::endl;
        }

        
};
