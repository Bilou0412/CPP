#include "Zombie.class.hpp"

Zombie::Zombie(void) : _name("No Name")
{
    std::cout << "Zombie " << this->_name << " was born" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name << " was born" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Burned" << std::endl;
}

void Zombie::annonce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}