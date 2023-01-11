#include <iostream>


class Foo
{};
int main()
{
try 
{
	Foo *p = new Foo();
} 
catch (std::bad_alloc e) 
{
	std::cerr << e.what() << std::endl;
}
}