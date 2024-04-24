#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
public:
  ClapTrap(const std::string &name);
  ~ClapTrap(void);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  std::string getName(void) const;
  int getHitPoint(void) const;

protected:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDammage;
};

#endif