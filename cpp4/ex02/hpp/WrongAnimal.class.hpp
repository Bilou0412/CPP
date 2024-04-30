#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
public:
  // Constructeur
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &copy);

  // Destructeur
  ~WrongAnimal(void);

  // Surcharge D'operateur
  WrongAnimal &operator=(const WrongAnimal &src);

  // Fonction publique
  void makeSound(void) const;

  // Getter
  std::string getType(void) const;

  // Setter

protected:
  std::string _type;
};
#endif