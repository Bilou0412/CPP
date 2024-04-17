#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.class.hpp"

class HumanB
{
public:
    HumanB(const std::string name);
    ~HumanB(void);
    void attack();
    void setWeapon(Weapon &weapon);

private:
    std::string _name;
    Weapon *weapon;
};

#endif