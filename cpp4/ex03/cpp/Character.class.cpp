#include "include.hpp"

Character::Character(std::string name) : _name(name)
{
  for (int i = 0; i <= 3; i++)
    inventory[i] = 0;
}

Character::Character(const Character &copy)
{
  for (int i = 0; i <= 3; i++)
  {
    inventory[i] = 0;
    if (copy.inventory[i])
      this->inventory[i] = copy.inventory[i]->clone();
  }
  this->_name = copy.getName();
}

Character::~Character()
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->inventory[i] != 0)
      delete this->inventory[i];
  }
}

std::string const &Character::getName() const
{
  return (this->_name);
}

Character &Character::operator=(const Character &src)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->inventory[i] != 0)
      delete this->inventory[i];
    this->inventory[i] = src.inventory[i]->clone();
  }
  this->_name = src.getName();
  return (*this);
}

void Character::equip(AMateria *m)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->inventory[i] == 0)
    {
      this->inventory[i] = m;
      break;
    }
  }
}
void Character::unequip(int idx)
{
  if ((idx <= 3 && idx >= 0) &&this->inventory[idx])
  {
    // gerer les item au sol;
    this->inventory[idx] = 0;
  }
}
void Character::use(int idx, ICharacter &target)
{
  if ((idx <= 3 && idx >= 0) && this->inventory[idx])
  {
    this->inventory[idx]->use(target);
  }
}

AMateria *Character::getMateriaFromInventory(int idx)
{
  return (this->inventory)[idx];
}