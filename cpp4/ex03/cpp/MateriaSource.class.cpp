#include "include.hpp"

MateriaSource::MateriaSource()
{
  for (int i = 0; i <= 3; i++)
    this->save[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != 0)
      delete this->save[i];
    this->save[i] = copy.save[i]->clone();
  }
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != 0)
      delete this->save[i];
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != 0)
      delete this->save[i];
    this->save[i] = src.save[i]->clone();
  }
  return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
  for (int i = 0; i <= 3; i++)
  {
    if (!this->save[i])
    {
      this->save[i] = m;
      break;
    }
  }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != 0 && !(type.compare(save[i]->getType())))
      return (this->save[i]->clone());
  }
  return (0);
}