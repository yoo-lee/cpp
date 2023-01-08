#include <iostream>
#include <stdlib.h>
#include <type_traits>

using namespace std;
int main()
{
			cout << "1";
	class A
	{
		public:
		int i;
		A(){};
		
		A(const A& obj)
		{
			cout << "copy ";
			*this = obj;
		}

		 A& operator=(const A& obj)
		{
			*this = obj;
			return *this;
		}
		
	};
	
	A a;
	A c;
	A d;
	A b =a;
	// A c;
	c =d;
	// a(c);
	// b = a;
	cout << b.i << endl;
}