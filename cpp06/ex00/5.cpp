#include <iostream>
#include <limits>

int main()
{
  constexpr int i = std::numeric_limits<int>::max();
  constexpr double d = std::numeric_limits<double>::max();

  std::cout << i << std::endl;
  std::cout << d << std::endl;
}