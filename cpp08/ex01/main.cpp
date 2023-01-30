#include "Span.hpp"

int main()
{
	{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortestSpan =" << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan =" << sp.longestSpan() << std::endl;
	}
    std::cout << "------------" << std::endl;

	{
	Span sp = Span(11);
	for (int i = 0; i < 11; i++)
	sp.addNumber(i);
	std::cout << "shortestSpan =" << sp.shortestSpan() << std::endl;
	std::cout <<  "longestSpan =" <<sp.longestSpan() << std::endl;
	return(0);
	}
}