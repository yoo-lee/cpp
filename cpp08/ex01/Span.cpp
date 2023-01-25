#ifndef EASYFIND_H
#define EASYFIND_H
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <set>

class Span
{
	private:
	std::multiset<int> multiset; 
	unsigned int N;

	public:
	Span() : N(0){}
	explicit Span (unsigned int N) : N(N){} 
	Span(const Span& span) : multiset(span.getMultiset()), maxSize(span.getMaxSize()) {}
	~Span(){}

	Span& operator=(const Span& span)
	{
		multiset = span.getMultiset();
		N = span.getMaxSize();
		return *this;
	}
	
	const std::multiset<int>& getMultiset() const
	{
		return multiset;
	}

	unsigned int getMaxSize() const
	{
		return maxSize;
	}
	unsigned int shortestSpan() const
	{
		if (multiset.size() <= 1)
		{
			throw std::logic_error ("Not enough number");
		}
	}
	unsigned int longestSpan() const;

	void addNumber(int v);
	
	template <typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end)
	{
		std::size_t remain = N - multiset.size();
		std::size_t dst = std::distance(begin,end);

		if (remain < dst)
		{
			throw std::logic_error("cannot store");
		}
		multiset.insert(begin, end);
	}
};

#endif

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
