#include <iostream>
#include <string.h>
#include <vector>

void my_cpp_journey_print_vector(const std::vector<std::string>& array){

    for(auto i = array.begin(); i != array.end(); i++){
        std::cout << *i << std::endl;
    }
};

