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
typename T::iterator easgit

template <typename T>
typename T::const_iterator easyfind(const T& container, const int i)
{
	return std::find(container.begin(), container.end(), i);
}
// A first easy exercise is the way to start off
//  on the right foot.
// Write a function template easyfind that accepts a type T.
 template <typename T>
 typename T::iterator easyfind(T &container, const int i)
 {
	return std::find(container.begin(), container.end(), i);
 }

//  It takes two parameters.
// The first one has type T and the second one is an integer.

// Assuming T is a container of integers, 
// this function has to find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, 
// you can either throw an exception or return
//  an error value
// of your choice. If you need some inspiration, 
// analyze how standard containers behave.
// Of course, implement and turn in your own tests to
//  ensure everything works as expected.
#endif