/*
**
** QWASAR.IO -- my_cpp_journey_find_in_string
**
** @param {std::string} param_1
** @param {char} param_2
**
** @return {int}
**
*/

size_t my_cpp_journey_find_in_string(const std::string& string, char c){
        
    size_t pos = string.find(c);
    if(pos != std::string::npos)
         return pos;
         
    return -1;
   
}
