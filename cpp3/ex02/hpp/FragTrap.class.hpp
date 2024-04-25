#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:
  // Constructeur
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &copy);

  // Destructeur
  ~FragTrap();

  // Surcharge d'operateur
  FragTrap &operator=(const FragTrap &src);

  // Fonction Publique
  void attack(const std::string &target);
  void highFivesGuys(void);
};

#endif