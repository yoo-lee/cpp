#include "Span.hpp"
#include <climits>
#include <set>
#include "Span.hpp"


	std::multiset<int> multiset; 
	unsigned int N;

	Span::Span() : N(0){}
	Span::Span(unsigned int n) : N(n){} 
	Span::Span(const Span& span)
	{
		multiset = span.getMultiset();
		N = span.getMaxSize();
	}
	Span::~Span(){}

	Span& Span::operator=(const Span& span)
	{
		multiset = span.getMultiset();
		N = span.getMaxSize();
		return *this;
	}
	
	const std::multiset<int>& Span::getMultiset() const
	{
		return multiset;
	}

	unsigned int Span::getMaxSize() const
	{
		return N;
	}

	unsigned int Span::shortestSpan() const
	{
		if (this->multiset.size() <= 1)
		{
			throw std::logic_error ("Not enough number");
		}
		
		std::multiset<int>::iterator first_it = multiset.begin(); 
		unsigned int shortspan;
		std::multiset<int>::iterator itr; 
		for (itr = multiset.begin(); itr != multiset.end(); ++itr)
		{
			if (itr == first_it)
				continue;
			shortspan = std::min(shortspan, static_cast<unsigned int>(*itr - *first_it));
			first_it = itr;
		}
		return shortspan;
	}

	unsigned int Span::longestSpan() const
	{
		if (this -> multiset.size() <= 1)
		{
			throw std::logic_error ("Not enough numbers");
		}
		return *multiset.rbegin() - *multiset.begin();
	}

	void Span::addNumber(int v)
	{
		if (multiset.size() == N)
		{
			throw  std::logic_error("Too much numbers");
		}
		multiset.insert(v);
	}
	
	template <typename InputItr>
	void Span::addNumber(InputItr begin, InputItr end)
	{
		std::size_t remain = N - multiset.size();
		std::size_t dst = std::distance(begin,end);

		std::multiset<int>::iterator beginIt = multiset.begin();
		unsigned int shotSpan = UINT_MAX;
		
		for (std::multiset<int>::iterator i = beginIt; i != multiset.end(); ++i)
		{
			if (i == multiset.begin())
				continue;
			shotSpan = std::min(shotSpan, static_cast<unsigned int>(*i - *beginIt));
			beginIt = i;
		}
    	return shotSpan;
	}

	unsigned int Span::longestSpan() const
	{
    if (multiset.size() <= 1)
    {
        throw std::logic_error("Not enough numbers stored");
    }
	// std::cout << "rbegin = "<<  *multiset.rbegin() << std::endl;  
	// std::cout << "end = " <<*multiset.end() << std::endl;  
	// std::cout << "begin = " <<*multiset.begin() << std::endl;  
    return *multiset.rbegin() - *multiset.begin();
	}
	
	void Span::addNumber(int v)
	{
    	if (multiset.size() == getMaxSize())
    	{
        	throw std::logic_error("Can't store any more");
    	}
    	multiset.insert(v);
	}

// Develop a Span class that can store a maximum of N integers.
//  N is an unsigned int
// variable and will be the only parameter passed to the constructor.
// This class will have a member function called addNumber()

//  to add a single number
// to the Span. It will be used in order to fill it.

//  Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
// Of course, you will write your own tests and they will be way more thorough than the
// ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
// even better.
