#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include "include.hpp"
class ICharacter;

class AMateria
{
public:
  // Constructeur
  AMateria();
  AMateria(std::string const &type);
  AMateria(const AMateria &copy);

  // Destructeur
  virtual ~AMateria(void);

  // Getter
  std::string const &getType() const;

  // Setter

  // Surcharge Operteur
  AMateria &operator=(const AMateria &src);

  // Fonction Publique
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);

protected:
  std::string _type;
};

#endif