#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
  for (int i = 0; i <= 3; i++)
    save[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
  *this = copy;
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != NULL)
      delete this->save[i];
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
  for (int i = 0; i <= 3; i++)
  {
    if (this->save[i] != NULL)
      delete this->save[i];
    this->save[i] = src.save[i]->clone();
  }
  return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
  for (int i = 0; i <= 3; i++)
  {
    if (save[i] == NULL)
      save[i] = m;
  }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
  for (int i = 0; i <= 3; i++)
  {
    if (save[i] != NULL && !(type.compare(save[i]->getType())))
      return (save[i]);
    return (0);
  }
}