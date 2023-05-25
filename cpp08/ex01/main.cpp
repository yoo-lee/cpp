#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

{
	Span a = Span(10);
	a.addNumber(6);
	a.addNumber(8);
	a.addNumber(7);
	a.addNumber(4);
	a.addNumber(10);
	
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
}
return(0);
}