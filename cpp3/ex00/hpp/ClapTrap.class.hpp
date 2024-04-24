#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
public:
  ClapTrap(std::string &name);
  ~ClapTrap(void);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDammage;
};

#endif