#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP
#include <iostream>
#include "AMateria.class.hpp"
#include "Cure.class.hpp"
#include "ICharacter.class.hpp"
#include "Character.class.hpp"
#include "IMateriaSource.class.hpp"


class Ice : public AMateria
{
public:
  // Constructeur
  Ice();
  Ice(const Ice &copy);

  // Destructeur
  ~Ice();

  // Getter
  std::string const &getType() const;

  // Setter

  // Surcharge Operteur
  Ice &operator=(const Ice &src);

  // Fonction Publique
  AMateria *clone() const;
  void use(ICharacter &target);
};

#endif