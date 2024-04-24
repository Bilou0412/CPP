#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
public:
  ScavTrap(const std::string &name);
  ~ScavTrap();
  void guardGate(void);
  void attack(const std::string &target);
};

#endif