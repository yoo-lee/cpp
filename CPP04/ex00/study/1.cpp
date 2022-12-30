#include <iostream>

class Spell 
{
public:
    virtual void cast();
};

void Spell::cast()
{
    std::cout << "Spell::cast called" << std::endl;
}

void Spell::cast() 
{
    std::cout << "Spell::cast called" << std::endl;
}

class HealSpell : public Spell {
public:
    virtual void cast();
};

void HealSpell::cast() {
    std::cout << "HealSpell::cast called" << std::endl;
}

int main() {
    Spell *heal = new HealSpell();
    heal->cast(); // HealSpell::cast called

    delete heal;
}