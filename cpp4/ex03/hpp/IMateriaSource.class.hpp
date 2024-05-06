#ifndef IMATERIASOURCE
#define IMATERIASOURCE
#include <iostream>
#include "AMateria.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "Character.class.hpp"
#include "ICharacter.class.hpp"
#include "MateriaSource.class.hpp"



class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif