#include <iostream>
using namespace std;

class A {
public:
	int i;

    A() 
	{ cout << "Constructor A" << endl;}
    A(const A &obj)
	{
        cout << "copy Constructor A" << endl;
    }
   const A& operator = (const A& obj)
	{
        cout << "insert" << endl;
		*this = obj;
        return (*this);
    }
};

A getA2() {
    A a;
    return a;
}
int main() {
    A a;
    // A b;
    A b = a;
    // a = b;
	// a(b);
	cout << a.i <<endl;
	cout << b.i <<endl;
}