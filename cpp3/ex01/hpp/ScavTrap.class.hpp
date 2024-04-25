#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
public:
  // Constructeur
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &copy);

  // Destructeur
  ~ScavTrap();

  // Surcharge d'operateur
  ScavTrap &operator=(const ScavTrap &src);

  // Fonction publique
  void guardGate(void);
  void attack(const std::string &target);
};

#endif