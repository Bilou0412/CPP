#include "Cat.class.hpp"
Cat::Cat(void)
{
  std::cout << "Default Cat constructor" << std::endl;
  this->brain = new Brain;
  if (this->brain == NULL)
  {
    std::cerr << "Error Alloc" << std::endl;
    exit(1);
  }
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
  this->brain = new Brain;
  if (this->brain == NULL)
  {
    std::cerr << "Error Alloc" << std::endl;
    exit(1);
  }
  *this->brain = *src.brain;
  return (*this);
}

Cat::~Cat(void)
{
  std::cout << "Default Cat Destructor" << std::endl;
  delete this->brain;
}

void Cat::makeSound(void) const
{
  std::cout << "Miaou Miouuuuuuuuuuuuu " << std::endl;
}

Brain *Cat::getBrain(void) const
{
  return (this->brain);
}
