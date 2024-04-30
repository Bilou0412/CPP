#include "Dog.class.hpp"
Dog::Dog(void)
{
  std::cout << "Default Dog constructor" << std::endl;
  this->_type = "Dog";
}
Dog::Dog(const Dog &copy)
{
  std::cout << "Default Dog copy constructor" << std::endl;
  *this = copy;
}

Dog &Dog::operator=(const Dog &src)
{
  this->_type = src._type;
  return (*this);
}

Dog::~Dog(void)
{
  std::cout << "Default Cat Destructor" << std::endl;
}

void Dog::makeSound(void) const
{
  std::cout << "Wouaf Wouaf" << std::endl;
}