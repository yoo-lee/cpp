#include <iostream>


class BaseClass
{
};
 
class DerivedClass : public BaseClass
{
};
 
int main()
{
    BaseClass *dc = new DerivedClass();
    delete dc;
}