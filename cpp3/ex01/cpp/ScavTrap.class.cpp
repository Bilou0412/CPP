#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDammage = 20;
  std::cout << "Constructor ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
  std::cout << "Copy Constructor ScavTrap" << std::endl;
  *this = copy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
  std::cout << "Assignment operator" << std::endl;
  this->_attackDammage = src._attackDammage;
  this->_energyPoints = src._energyPoints;
  this->_hitPoints = src._hitPoints;
  this->_name = src._name;
  return(*this);
}

void ScavTrap::guardGate(void)
{
  std::cout << "ScavTrap " << _name << " is now in Gate keeper mode " << std::endl;
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "Deconstructor ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (_energyPoints > 0 && _hitPoints > 0)
  {
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDammage << " points of damage!" << std::endl;
    _energyPoints--;
  }
  else if (_energyPoints <= 0)
    std::cout << _name << " have no energy point" << std::endl;
  else
    std::cout << _name << " have no hit point" << std::endl;
}
