#include <string.h>
int my_string_index(char* param_1, char param_2)
{
    for (int i = 0; i < strlen(param_1); i++){
        if (i == strlen(param_1) -1){
            return -1;
            break;
        }else if (param_1[i]==param_2){
            return i;
            break;
        }else{
            continue
        }
    }
}