#include <iostream>
#include <string.h>
#include <list>
#include <iterator>


void my_cpp_journey_print_int_list(const std::list<int>& list){

    for(auto i = list.begin(); i != list.end(); i++ ){
        std::cout << *i << std::endl;
    }
};
