#ifndef ICHARACTER_CLASS_HPP
#define ICHARACTER_CLASS_HPP
#include <iostream>
#include "AMateria.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "Character.class.hpp"
#include "IMateriaSource.class.hpp"

class ICharacter
{
public:
  virtual ~ICharacter() {}
  virtual std::string const &getName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif
