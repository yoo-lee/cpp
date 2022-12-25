#include <iostream>
#include <string>

class Parent {
public:
    Parent() {
        std::cout << "Parent constructor called" << std::endl;
    }
    ~Parent() {
        std::cout << "Parent destructor called" << std::endl;
    }
};

class Child : public virtual Parent {
public:
    Child() {
        std::cout << "Child constructor called" << std::endl;
    }
    ~Child() {
        std::cout << "Child destructor called" << std::endl;
    }
};

void freeParent(Parent *p) {
    delete p;
}

int main() {
    Child *child = new Child();
    freeParent(child);
}