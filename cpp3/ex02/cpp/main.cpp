#include "FragTrap.class.hpp"

int main()
{
  FragTrap fragTrap("Michel");

  std::cout << fragTrap.getName() << " has " << fragTrap.getHitPoint() << "hp" << std::endl;
  fragTrap.attack("J-J");
  fragTrap.takeDamage(20);
  std::cout << fragTrap.getName() << " has " << fragTrap.getHitPoint() << "hp" << std::endl;
  fragTrap.beRepaired(10);
  std::cout << fragTrap.getName() << " has " << fragTrap.getHitPoint() << "hp" << std::endl;
  fragTrap.highFivesGuys();
}