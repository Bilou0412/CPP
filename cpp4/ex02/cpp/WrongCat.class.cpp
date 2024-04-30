#include "WrongCat.class.hpp"
WrongCat::WrongCat(void)
{
  std::cout << "Default WrongCat constructor" << std::endl;
  this->_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &copy)
{
  std::cout << "Default WrongCat copy constructor" << std::endl;
  *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
  this->_type = src._type;
  return (*this);
}

WrongCat::~WrongCat(void)
{
  std::cout << "Default WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
  std::cout << "Wiaouuuuuuuu " << std::endl;
}