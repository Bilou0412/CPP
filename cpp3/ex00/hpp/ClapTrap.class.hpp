#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
public:
  // Constructeur
  ClapTrap(void);
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &copy);

  // Destructeur
  ~ClapTrap(void);

  // Surcharge D'operateur
  ClapTrap &operator=(const ClapTrap &src);

  // Fonction publique
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  // Getter
  std::string getName(void) const;
  int getHitPoint(void) const;

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDammage;
};

#endif