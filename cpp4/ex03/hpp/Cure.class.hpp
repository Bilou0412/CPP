#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP
#include <iostream>
#include "AMateria.class.hpp"
#include "Ice.class.hpp"
#include "ICharacter.class.hpp"
#include "Character.class.hpp"
#include "IMateriaSource.class.hpp"



class Cure : public AMateria
{
public:
  // Constructeur
  Cure();
  Cure(const Cure &copy);

  // Destructeur
  ~Cure();

  // Getter
  std::string const &getType() const;

  // Setter

  // Surcharge Operteur
  Cure &operator=(const Cure &src);

  // Fonction Publique
  AMateria *clone() const;
  void use(ICharacter &target);
};

#endif