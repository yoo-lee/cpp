
#include <iostream>
#include <string>
using namespace std;

void f(auto const &s)
{
    // s = 4444;
    cout << s <<endl;
    cout << &s <<endl;
}
void g(char  *s)
{
    s = "hoge";
    cout << s <<endl;
    cout << &s <<endl;
}

void h(int *t)
{
    cout <<"t="<< t <<endl;
    cout <<"&t="<< &t <<endl;
}
int main ()
{
    g("fnouah");
//     f(222);
    int p;
    int *i = &p;
    p = 120;
    // int i = 20;
    h(&i);
    cout << "i ="<< i <<endl;
    cout << "&i ="<< &i <<endl;

    // string p = "dfnoah";
    // cout << "&p="<< &p <<endl;
    // f(p);
	system("leaks -q ./a.out");
    return 0;
}