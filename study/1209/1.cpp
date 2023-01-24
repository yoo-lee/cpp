#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass& operator=(const MyClass& rhs);
};

MyClass& MyClass::operator=(const MyClass& rhs)
{
    // 代入操作時に行う処理を記述
    return *this;
}

int main ()
{
	MyClass b;
	MyClass a(b);
	
}