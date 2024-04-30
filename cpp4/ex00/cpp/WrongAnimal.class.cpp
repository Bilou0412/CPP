#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
  std::cout << "Default WrongAnimal constructor" << std::endl;
  this->_type = "WrongDog";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
  std::cout << "Default WrongAnimal copy constructor" << std::endl;
  *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
  this->_type = src._type;
  return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
  std::cout << "Default WrongAnimal Destructor" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
  return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
  std::cout << "Wronnnnnnnng" << std::endl;
}