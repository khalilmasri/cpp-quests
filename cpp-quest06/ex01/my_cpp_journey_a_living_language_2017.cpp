#include <iostream>
#include <utility>

namespace OutsideNamespace { namespace NestedNamespace{
  void my_nested_namespaced_func() {
    std::cout << "My Nested namespaced func" << std::endl;
  }
} }

int main() {
  std::cout << "<Nested Namespace>" << std::endl;
  OutsideNamespace::NestedNamespace::my_nested_namespaced_func();
  std::cout << "</Nested Namespace>" << std::endl;

  std::cout << "<CTAD>" << std::endl;
  auto var = std::pair<float, bool>(5.0, false);
  std::cout << "Mount Everest: 8848m" << std::endl;
  std::cout << "</CTAD>" << std::endl;

  return 0;
}