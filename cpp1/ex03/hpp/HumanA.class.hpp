#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include<string>
#include<iostream>
#include<iomanip>
#include "Weapon.class.hpp"

class HumanA{
    public:
        HumanA(Weapon weapon);
        ~HumanA(void);
        void attack();
    private:
        std::string _name;
        Weapon weapon;
};

#endif