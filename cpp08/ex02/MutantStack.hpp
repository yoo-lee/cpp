#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>


template <typename T>
class MutantStack : public std::stack <T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator it;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T>& mutant) : std::stack<T>(mutant) {}
	~MutantStack() {}

	MutantStack<T>& opetator = (const MutantStack<T> mutant)
	
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
