#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP
#include <string>
#include <iostream>
#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
public:
  // Constructeur
  WrongCat(void);
  WrongCat(const WrongCat &copy);

  // Destructeur
  ~WrongCat(void);

  // Surcharge D'operateur
  WrongCat &operator=(const WrongCat &src);

  // Fonction publique
  void makeSound(void) const;

  // Getter
  std::string getType(void) const;

  // Setter

protected:
  std::string _type;
};
#endif