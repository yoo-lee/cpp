#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, const int v)
{
	return std::find(container.begin(), container.end(), v);
}

template <typename T>

template <typename T>
T add(T a,int b){
    return a + b;
}



// A first easy exercise is the way to start off on the right foot.
// Write a function template easyfind that accepts a type T.
//  It takes two parameters.
// The first one has type T and the second one is an integer.
typename T::const_iterator easyfind , int 
// Assuming T is a container of integers, 
this function has to
//  find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, you can either throw an exception
//  or return an error value
// of your choice. If you need some inspiration,
//  analyze how standard containers behave.
// Of co