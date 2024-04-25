#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:
  FragTrap(const std::string &name);
  ~FragTrap();
  void attack(const std::string &target);
  void highFivesGuys(void);
};

#endif