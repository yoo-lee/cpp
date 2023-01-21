#include "Base.hpp"

// Implement the following functions:
// Base * generate(void);

Base * generate(void)
{
	Base *base = NULL;
	int flag = rand() % 3;

	if(flag == 0)
		base = new A();
	if(flag == 1)
		base = new B();
	if(flag == 2)
		base = new C();
	return (base);
}

// It randomly instanciates A, B or C and returns the instance as a Base pointer.
//  Feel free
// to use anything you like for the random choice implementation.

// void identify(Base* p);
// It prints the actual type of the 
// object pointed to by p: "A", "B" or "C".

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "The type of base is A !" << std::endl;
	if (dynamic_cast<B*>(p) != 0)
		std::cout << "The type of base is B !" << std::endl;
	if (dynamic_cast<C*>(p) != 0)
		std::cout << "The type of base is C !" << std::endl;
	else 
		std::cout << "The type of invalid type !" << std::endl;
}

// void identify(Base& p);
// It prints the actual type of the object pointed to 
// by p: "A", "B" or "C". Using a pointer
void identify(Base& p)
{
	Base &pp = p;
	
	try
	{
		pp = dynamic_cast<A&>(p);
		std::cout << "Base type A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "p is Type A" << std::endl;
	}
	
	try
	{
		pp = dynamic_cast<B&>(p);
		std::cout << "Base type B" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "p is Type B" << std::endl;
	}

	try
	{
		pp = dynamic_cast<C&>(p);
		std::cout << "Base type C" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "p is Type C" << std::endl;
	}
}

int main ()
{
	Base *base;

	base = generate();
	std::cout << "Generated a random Base" << std::endl;
	std::cout << "Guessing the type of Base via pointer" << std::endl;
	identify(base);
	std::cout << "identifying the type of Base via reference" << std::endl;
	identify(*base);
}

// inside this function is forbidden.
// Including the typeinfo header is forbidden.
// Write a program to test that everything works as expected.