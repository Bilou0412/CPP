#include "ClapTrap.class.hpp"

int main()
{
  ClapTrap clapTrap("kefir");

  std::cout << clapTrap.getName() << " has " << clapTrap.getHitPoint() << " hp" << std::endl;
  clapTrap.attack("bilel");
  clapTrap.takeDamage(10);
  clapTrap.attack("bilel");
  std::cout << clapTrap.getName() << " has " << clapTrap.getHitPoint() << " hp" << std::endl;
  clapTrap.beRepaired(2);
  std::cout << clapTrap.getName() << " has " << clapTrap.getHitPoint() << " hp" << std::endl;
}