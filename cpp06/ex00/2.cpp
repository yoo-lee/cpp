#include <iostream>

int main()
{
    double real = 10.5;
    int num;

    //int型に変換
    num = static_cast<int>(real);

    //参考:C言語でのキャスト
    int num2 = (int)real;

    std::cout << num << std::endl;

    std::cin.get();
}