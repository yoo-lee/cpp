
#include <iostream>
#include <string>

int main() {
  std::string expression = "Hello";

  for (char c : expression) {
    std::cout << c << "+";
  }

  return 0;
}