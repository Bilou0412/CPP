#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name)
{
  _hitPoints = 10;
  _energyPoints = 10;
  _attackDammage = 0;
  std::cout << _name << " is alive" << std::endl;
}
ClapTrap::~ClapTrap(void)
{
  std::cout << _name << " is dead" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
  if (_energyPoints > 0 && _hitPoints > 0)
  {
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDammage << " points of damage!" << std::endl;
    _energyPoints--;
  }
  else if (_energyPoints <= 0)
    std::cout << _name << " have no energy point" << std::endl;
  else
    std::cout << _name << " have no hit point" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hitPoints > 0)
  {
    _hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " take " << amount << " dammage " << std::endl;
  }
  else
    std::cout << "There's nothing left of the " << _name << " respecting his remains. " << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
  if (_energyPoints > 0 && _hitPoints > 0)
  {
    std::cout << _name << " be repaired " << std::endl;
    _energyPoints--;
    _hitPoints += amount;
  }
  else if (_energyPoints <= 0)
    std::cout << _name << " have no energy point" << std::endl;
  else
    std::cout << _name << " have no hit point" << std::endl;
}

std::string ClapTrap::getName(void) const
{
  return (_name);
}

int ClapTrap::getHitPoint(void) const
{
  return (_hitPoints);
}
