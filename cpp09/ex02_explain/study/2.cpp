#include <iostream>

int f(int a)
{
	if (a == 0)
		throw std::runtime_error("chimpo");
	if (a == 1)
		throw std::runtime_error("2");
	return (a = 1);
}

int main ()
{
	try{
		int res = f(1);
	}
	catch (const std::exception& e){
		std::cout << "Excption" << e.what() <<  std::endl;
	}
	return 0;
}