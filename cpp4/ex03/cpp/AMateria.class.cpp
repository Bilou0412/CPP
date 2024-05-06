#include "include.hpp"

AMateria::AMateria(void) : _type("NoType") {}

AMateria::AMateria(std::string const &type) : _type(type){};

AMateria::AMateria(const AMateria &copy)
{
  *this = copy;
}

AMateria &AMateria::operator=(const AMateria &src)
{
  this->_type = src._type;
  return (*this);
}

AMateria::~AMateria(){};

std::string const &AMateria::getType() const
{
  return (_type);
};

void AMateria::use(ICharacter &target)
{
  std::cout << "abstract amtateria use on" << target.getName() << std::endl;
}
