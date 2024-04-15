#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include<string>
#include<iostream>
#include<iomanip>
#include "Weapon.class.hpp"

class HumanB{
    public:
        HumanB(void);
        ~HumanB(void);
        void attack();
    private:
        std::string _name;
        Weapon weapon;
};

#endif