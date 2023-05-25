#include "easyfind.hpp"
using namespace std;
int main ()
{
	// for (int j = 0; j <6; j++)
	// 	{
	// 		int a[];
	// 		int a[j] = j;
	// 	}
    const int a[] = {1, 0, 2, -1, 300};
	// for (std::vector<int>::iterator it = a.begin(); it < a.end(); ++it)
	// std::cout << "it = " << *it << std::endl;
	
	std::vector<int> vec(a, a+5);
	const int v = 0;
	std::cout << "v = " << v << std::endl;
	std::vector<int>::iterator i = easyfind(vec, v);
	if (i != vec.end())
	{
		std::cout << "find -> " << *i <<std::endl;
	}
	else
	{
		std::cout << "not found" << *i <<std::endl;
	}
	{

		std::vector<int> vec(a, a+5);
		const int v = 10;
		std::cout << "v = " << v << std::endl;
		std::vector<int>::iterator i = easyfind(vec, v);
		if (i < vec.end())
		{
			std::cout << "find -> " << *i << std::endl;
		}
		else
		{
			std::cout << "not found" << std::endl;
		}
	}
	{
	std::vector<int> vec(a, a+5);
	const int v = 0;
	std::cout << "v = " << v << std::endl;
	std::vector<int>::iterator i = easyfind(vec, v);
	if (i != vec.end())
	{
		std::cout << "find -> " << *i <<std::endl;
	}
	else
	{
		std::cout << "not found" << *i <<std::endl;
	}
	}
	{
		std::vector<int> vec(a, a+5);
		const int v = 2;
		std::cout << "v = " << v << std::endl;
		std::vector<int>::iterator i = easyfind(vec, v);
		if (i < vec.end())
		{
			std::cout << "find -> " << *i << std::endl;
		}
		else
		{
			std::cout << "not found" << std::endl;
		}
	}
}
// A first easy exercise is the way to start off on the right foot.
// Write a function template easyfind that accepts a type T.
// template easyfind<

//  It takes two parameters.
// The first one has type T and the second one is an integer.

// Assuming T is a container of integers, 
// this function has to find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, 
// you can either throw an exception or return
//  an error value
// of your choice. If you need some inspiration, 
// analyze how standard containers behave.
// Of course, implement and turn in your own tests to
//  ensure everything works as expected.