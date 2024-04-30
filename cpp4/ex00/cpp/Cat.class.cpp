#include "Cat.class.hpp"
Cat::Cat(void)
{
  std::cout << "Default Cat constructor" << std::endl;
  this->_type = "Cat";
}
Cat::Cat(const Cat &copy)
{
  std::cout << "Default Cat copy constructor" << std::endl;
  *this = copy;
}

Cat &Cat::operator=(const Cat &src)
{
  this->_type = src._type;
  return (*this);
}

Cat::~Cat(void)
{
  std::cout << "Default Cat Destructor" << std::endl;
}

void Cat::makeSound(void) const
{
  std::cout << "Miaou Miouuuuuuuuuuuuu " << std::endl;
}