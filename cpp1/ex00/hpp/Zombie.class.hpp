#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include<string>
#include<iostream>
#include<iomanip>

class Zombie{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void annonce(void);
    private:
        std::string _name;
};

#endif