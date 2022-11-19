#include <iostream>
#include <string>

int main() {
  std::string s;
  if (std::getline(std::cin, s)) {
    std::cout << s << std::endl;
  }
}
