#include <iostream>

int main()
{
    int buf = 100;
    
    //これはできない
    //int nums[buf];

    int *nums = new int[buf];

    for (int i = 0; i < buf; i++)
    {
        nums[i] = i;
    }

    std::cout << nums[0] << std::endl;
    std::cout << nums[50] << std::endl;
    std::cout << nums[79] << std::endl;
    std::cout << nums[99] << std::endl;

    //newしたものはdeleteする
    delete[] nums;

    std::cin.get();
}