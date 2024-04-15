#include "../hpp/Zombie.class.hpp"

Zombie::Zombie(std::string name): _name(name) 
{
    std::cout << "Zombie "<< this->_name << " was born" << std::endl;
}

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Burned" << std::endl;
}

void Zombie::setName(std::string name) 
{
    this->_name = name;
}

void Zombie::annonce(void)
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
