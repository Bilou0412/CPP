#include "Zombie.class.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " Burned" << std::endl;
}

void Zombie::annonce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}