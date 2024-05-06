#ifndef MATERIASOURCE
#define MATERIASOURCE
#include <iostream>
#include "AMateria.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "Character.class.hpp"
#include "ICharacter.class.hpp"
#include "IMateriaSource.class.hpp"

class MateriaSource : public IMateriaSource
{
public:
  // Constructeur
  MateriaSource();
  MateriaSource(const MateriaSource &copy);

  // Destructeur
  ~MateriaSource();

  // Surcharge Operteur
  MateriaSource &operator=(const MateriaSource &src);

  // Getter

  // Setter

  // Fonction Publique
  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &type);

private:
  AMateria *save[4];
};

#endif