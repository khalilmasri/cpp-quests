#include <iostream>
#include <string.h>
#include <vector>

template <typename T>
void my_cpp_journey_print_int_vector(const std::vector<T>& array){

    for(auto i = array.begin(); i != array.end(); i++){
        std::cout << *i << std::endl;
    }
};
