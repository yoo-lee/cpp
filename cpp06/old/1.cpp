// Implement a Base class that has a public virtual destructor only.
//  Create three empty

class Base
{
	virtual ~Base();
};
// classes A, B and C, that publicly inherit from Base.
// These four classes don’t have to be designed in the Orthodox
// Canonical Form.

class A : public : calss Base{};
class B : public : calss Base{};
class C : public : calss Base{};

// Implement the following functions:
// Base * generate(void);

Base * generate(void);
{
	flag = rand() % 3
	if(flag == 0)
	return (new A);
	if(flag == 1)
	return (new B);
	if(flag == 2)
	return (new C);
}

// It randomly instanciates A, B or C and returns the instance as a Base pointer.
//  Feel free
// to use anything you like for the random choice implementation.

// void identify(Base* p);
// It prints the actual type of the object pointed to by p: "A", "B" or "C".
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
	Base &pp = p
	
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

	try
	{
		pp = dynamic_cast<D&>(p);
		std::cout << "Base type D" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "p is Type D" << std::endl;
	}
}

int main ()
{
	Base *base;
	// srand

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