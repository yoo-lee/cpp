#include <iostream>
#include <stdexcept>

void f()
{
	throw 123;
}

int main ()
{
	try
	{
		f();
	}
	catch (int i){}
}

