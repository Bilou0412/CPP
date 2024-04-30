#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

// int main(void)
//{
//   Animal *Chien = new Dog;
//   Animal *Chat = new Cat;
//
//   std::cout << Chat->gettype() << std::endl;
//   std::cout << Chien->gettype() << std::endl;
//   Chien->makeSound();
//   Chat->makeSound();
// }

int main()
{
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const WrongAnimal *meta1 = new WrongAnimal();
  const WrongAnimal *i1 = new WrongCat();
  std::cout << i1->getType() << " " << std::endl;
  i1->makeSound(); // will output the cat sound!
  meta1->makeSound();
  delete meta1;
  delete meta;
  delete j;
  delete i;
  delete i1;
  return 0;
}
