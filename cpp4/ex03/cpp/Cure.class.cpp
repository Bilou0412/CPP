#include"include.hpp"

Cure::Cure(void) : AMateria("cure"){};

Cure::Cure(const Cure &copy)
{
  *this = copy;
};

Cure::~Cure(){};

std::string const &Cure::getType() const
{
  return (_type);
};

Cure &Cure::operator=(const Cure &src)
{
  _type = src._type;
  return (*this);
}

void Cure::use(ICharacter &target)
{
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria *Cure::clone() const
{
  AMateria *clone = new Cure();
  return (clone);
}
