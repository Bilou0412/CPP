#include "include.hpp"

Ice::Ice(void) : AMateria("ice"){};

Ice::Ice(const Ice &copy)
{
  *this = copy;
};

Ice::~Ice() {};

std::string const &Ice::getType() const
{
  return (_type);
};

Ice &Ice::operator=(const Ice &src)
{
  _type = src._type;
  return (*this);
};

void Ice::use(ICharacter &target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
  AMateria *clone = new Ice;
  return (clone);
}
