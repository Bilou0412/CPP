#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include<string>
#include<iostream>
#include<iomanip>

class Weapon{
    public:
        Weapon(void);
        ~Weapon(void);
        std::string& getType(void);
        void setType(std::string);
    private:
        std::string _type;
};

#endif