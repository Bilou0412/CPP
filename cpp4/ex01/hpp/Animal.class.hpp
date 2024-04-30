#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Brain.class.hpp"

class Animal
{
public:
  // Constructeur
  Animal(void);
  Animal(const Animal &copy);

  // Destructeur
  virtual ~Animal(void);

  // Surcharge D'operateur
  Animal &operator=(const Animal &src);

  // Fonction publique
  virtual void makeSound(void) const;

  // Getter
  std::string getType(void) const;
  
  // Setter

protected:
  std::string _type;
};
#endif