#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <algorithm>
#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T>& mutant) : std::stack<T>(mutant) {}
	~MutantStack() {}

	MutantStack<T>& operator =(const MutantStack<T>& mutant)
	{
		this->c = mutant.c;
		return *this;
	}

	iterator begin() {return this->c.begin();}
    const_iterator begin() const {return this->c.begin();}
    reverse_iterator rbegin() {return this->c.rbegin();}
    const_reverse_iterator rbegin() const {return this->c.rbegin();}
    iterator end() {return this->c.end();}
    const_iterator end() const {return this->c.end();}
    reverse_iterator rend() {return this->c.rend();}
    const_reverse_iterator rend() const {return this->c.rend();}
};

#endif

// Now, time to move on more serious things. Let’s develop something weird.
// The std::stack container is very nice. Unfortunately, it is one of the only
//  STL Containers that is NOT iterable. That’s too bad.
// But why would we accept this? Especially 
// if we can take the liberty of butchering the
// original stack to create missing features.
// To repair this injustice, you have to make the std::stack container iterable.
// Write a MutantStack class. It will be implemented in terms of a std::stack.
// It will offer all its member functions, plus an additional feature: iterators.
// Of course, you will write and turn in your own tests to ensure everything works as
// expected.