#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
#include <map>


std::map<std::string, int> my_cpp_journey_build_mountains(const std::vector<std::string>& mountain_names, const std::vector<int>& mountain_sizes) {
  
    std::map<std::string, int> mountain_table;

    auto name = mountain_names.begin();
    auto size =mountain_sizes.begin();
    for(; name != mountain_names.end() || size != mountain_sizes.end(); name++,size++){
        mountain_table.insert(std::pair<std::string, int>(*name,*size));
    }

    return mountain_table;
}

void my_cpp_journey_print_string_int_map(const std::map<std::string, int>& mountains) {
   auto i = mountains.begin();
   for(; i != mountains.end(); i++){
       std::cout << i->first << " -> " << i->second << std::endl;
   }
}