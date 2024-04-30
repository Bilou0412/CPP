#include "Animal.class.hpp"

Animal::Animal(void) : _type("Animal")
{
  std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
  std::cout << "Default Animal copy constructor" << std::endl;
  *this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
  this->_type = src._type;
  return (*this);
}

Animal::~Animal(void)
{
  std::cout << "Default Animal Destructor" << std::endl;
}

std::string Animal::getType(void) const
{
  return (this->_type);
}

void Animal::makeSound(void) const
{
  std::cout << "Je suis un animal" << std::endl;
}