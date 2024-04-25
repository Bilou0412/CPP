#include "FragTrap.class.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDammage = 30;
  std::cout << "Constructor FragTrap" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
  std::cout << "Copy Constructor FragTrap" << std::endl;
  *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
  std::cout << "Assignment operator" << std::endl;
  this->_attackDammage = src._attackDammage;
  this->_energyPoints = src._energyPoints;
  this->_hitPoints = src._hitPoints;
  this->_name = src._name;
  return (*this);
}

FragTrap::~FragTrap(void)
{
  std::cout << "Deconstructor FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "Hey, great job on that project! You deserve a high five!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
  if (_energyPoints > 0 && _hitPoints > 0)
  {
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDammage << " points of damage!" << std::endl;
    _energyPoints--;
  }
  else if (_energyPoints <= 0)
    std::cout << _name << " have no energy point" << std::endl;
  else
    std::cout << _name << " have no hit point" << std::endl;
}
