#include <iostream>
#include <iomanip>

void print(std::string str){
    std::cout << str;
}

void print(int value){
    std::cout << value;
}

void print(char value){
    std::cout << value;
}

int main() {
  const int integer = 40;
  const char c      = '.';
  std::string s1    = "I'm ";
  std::string s2    = "years old";

  print(s1);
  print(integer);
  print(" ");
  print(s2);
  print(c);
  print('\n');
  return 0;
}
