#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    ~Weapon();

    std::string const getType();
    void    setType(std::string type);
};

#endif
// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
