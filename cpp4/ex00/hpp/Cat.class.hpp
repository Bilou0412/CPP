#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"

class Cat : public Animal
{
public:
  // Constructeur
  Cat(void);
  Cat(const Cat &copy);

  // Destructeur
  ~Cat(void);

  // Surcharge D'operateur
  Cat &operator=(const Cat &src);

  // Fonction publique
  void makeSound(void) const;

  // Getter

  // Setter
};
#endif