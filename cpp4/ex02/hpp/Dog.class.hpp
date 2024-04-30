#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"

class Dog : public Animal
{
public:
  // Constructeur
  Dog(void);
  Dog(const Dog &copy);

  // Destructeur
  ~Dog(void);

  // Surcharge D'operateur
  Dog &operator=(const Dog &src);

  // Fonction publique
  void makeSound(void) const;

  // Getter
  Brain *getBrain(void) const;

  // Setter
private:
  Brain *brain;
};
#endif