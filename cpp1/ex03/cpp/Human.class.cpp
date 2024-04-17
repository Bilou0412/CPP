#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), weapon(weapon) {}

HumanA::~HumanA(void)
{
    std::cout << this->_name << "is dead" << std::endl;
}
HumanB::HumanB(const std::string name) : _name(name) {}

HumanB::~HumanB(void)
{
    std::cout << this->_name << "is dead" << std::endl;
}
void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
