#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

HumanA::HumanA(Weapon weapon): weapon(weapon){}

HumanA::~HumanA(void)
{
    std::cout <<this->_name << "is dead" << std::endl; 
}
HumanB::HumanB(void){}

HumanB::~HumanB(void)
{
    std::cout <<this->_name << "is dead" << std::endl;
}
void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}


