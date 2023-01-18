#include <iostream>

int main()
{
    int num = 10;
    double *real = static_cast<double*>(static_cast<void*>(&num));

    //これはエラー
    //double *real = static_cast<double*>(&num);

    std::cout << &num << std::endl;
    std::cout << num << std::endl;

    std::cout << real << std::endl;
    std::cout << *real << std::endl;

    std::cin.get();
}