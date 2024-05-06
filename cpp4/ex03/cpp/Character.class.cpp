#include "Character.class.hpp"

Character::Character(std::string name) : _name(name)
{
  for (int i = 0; i <= 3; i++)
    inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
  *this = copy;
}

Character::~Character()
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->inventory[i] != NULL)
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
    if (this->inventory[i] != NULL)
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
    if (inventory[i] == NULL)
      inventory[i] = m;
  }
}
void Character::unequip(int idx)
{
  if (inventory[idx] != NULL)
  {
    delete inventory[idx];
    inventory[idx] == NULL;
  }
}
void Character::use(int idx, ICharacter &target)
{
  if (inventory[idx] != NULL)
    inventory[idx]->use(target);
}