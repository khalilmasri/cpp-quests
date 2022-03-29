#include <iostream>
#include <queue>

void my_cpp_journey_print_string_queue(std::queue<std::string>& queue){

    std::queue<std::string> temp = queue;
    while(!temp.empty()){
        std::cout << temp.front() << std::endl;
        temp.pop();
    }
};
