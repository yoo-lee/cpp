#include <iostream>

class Base {
public:
    virtual void f()
    {
        std::cout << "Base::f()" << std::endl;
    }
};

class D1 : public Base {
public:
    virtual void f()
    {
        std::cout << "D1::f()" << std::endl;
    }
};

class D2 : public Base {
public:
    virtual void f()
    {
        std::cout << "D2::f()" << std::endl;
    }
};

void call_f(Base* b)
{
    b->f();
}

int main()
{
    D1 d1;
    D2 d2;

    call_f(&d1);
    call_f(&d2);
}