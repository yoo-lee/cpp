#include <iostream>

class Foo
{
public:
    static int num;
    Foo() {};
	Foo(int n) {};
	Foo(int n, int s) {};
    ~Foo() {};
};

int Foo::num = 1; // 初期化はクラスの外で行う

int main()
{
    Foo f1, f2;
    std::cout << f1.num << std::endl; // 1
    f1.num = 42;
    std::cout << f2.num << std::endl; // 42
}