#include <iostream>
#include <stdexcept>

double divide(double a, double b)
{
// 例えば 0 で割ろうとしたときに std::range_error 例外を発生させます。
	if (b == 0)
	{
		throw std::range_error("Divided by zero.");
	}
	return a / b;
}

int main()
{
	double a, b;
	printf("%f",divide(1.1, 0));
}