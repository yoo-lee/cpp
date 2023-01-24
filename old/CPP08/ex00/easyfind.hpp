#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind( T & container, const int i)
{
	return std::find(container.begin(), container.end(), i);
}

template <typename T>
typename T::const_iterator easyfind(const T& container, const int i)
{
	return std::find(container.begin(), container.end(), i);
}

#endif