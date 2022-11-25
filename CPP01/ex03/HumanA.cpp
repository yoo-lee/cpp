class HumanA
{
    private:
    string::Weapon;
    string::name;
    public:
    HumanA(std::string name, Weapon &weapon);
    attack(weapon type);
};

    HumanA(std::string name, Weapon &weapon)
    {
        name 
    }
    attack()
    {
    std::cout << name <<attacks with their << weapon type << std::endl;
    }

HumanA()
takeweapon()
{
    HumanA = wepon;
}

// HumanA and HumanB are almost the 
// same except for these two tiny details:
// • While HumanA takes the 
// Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.