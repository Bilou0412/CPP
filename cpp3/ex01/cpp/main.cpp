#include "ScavTrap.class.hpp"

int main()
{
    ScavTrap scavTrap("Michel");

    std::cout << scavTrap.getName() << " has " << scavTrap.getHitPoint() << "hp" << std::endl;
    scavTrap.attack("J-J");
    scavTrap.takeDamage(20);
    std::cout << scavTrap.getName() << " has " << scavTrap.getHitPoint() << "hp" << std::endl;
    scavTrap.beRepaired(10);
    std::cout << scavTrap.getName() << " has " << scavTrap.getHitPoint() << "hp" << std::endl;
    scavTrap.guardGate();
}