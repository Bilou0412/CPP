#include "Dog.class.hpp"
Dog::Dog(void)
{
  std::cout << "Default Dog constructor" << std::endl;
  this->brain = new Brain;
  if (this->brain == NULL)
  {
    std::cerr << "Error Alloc" << std::endl;
    exit(1);
  }
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
  *this->brain = *src.brain;
  return (*this);
}

Dog::~Dog(void)
{
  std::cout << "Default Cat Destructor" << std::endl;
  delete this->brain;
}

void Dog::makeSound(void) const
{
  std::cout << "Wouaf Wouaf" << std::endl;
}

Brain *Dog::getBrain(void) const
{
  return (this->brain);
}
