#ifndef BASE_HPP
#define BASE_HPP

#include <stdio.h>
#include <iostream>
// Implement a Base class that has a public virtual destructor only.
//  Create three empty

class Base
{
	public:
	Base(){};
	virtual ~Base(){};
};
// classes A, B and C, that publicly inherit from Base.
// These four classes don’t have to be designed in the Orthodox
// Canonical Form.

class A : public Base
{
	public:
	A(){};
	virtual ~A(){};
};

class B : public Base
{
	public:
	B(){};
	virtual ~B(){};
};
class C : public Base
{
	public:
	C(){};
	virtual ~C(){};
};

#endif