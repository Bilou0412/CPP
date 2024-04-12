#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include<string>
#include<iostream>
#include<iomanip>

class Zombie{
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void setName(std::string name);
        void annonce(void);
    private:
        std::string _name;
};

#endif