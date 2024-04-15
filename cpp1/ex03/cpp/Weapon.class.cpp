#include "Weapon.class.hpp"

Weapon::Weapon(void): _type("No Weapon"){}

Weapon::~Weapon(void)
{
    std::cout <<this->_type << "was drop" << std::endl; 
}

const std::string& Weapon::getType(void) const
{
  return (this->_type);
}

void Weapon::setType(std::string type)
{
  this->_type = type;
}