#include <iostream>
#include <string>

int main ()
{
  std::string n;

  std::cout << "Please, enter your full name: ";
  std::cin >> n;
//   std::getline (std::cin,n);
  std::cout << "Hello, " << n << "!\n";

  return 0;
}
