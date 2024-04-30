#include "Brain.class.hpp"

Brain::Brain(void) {}

Brain::Brain(const Brain &copy)
{
  *this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
  for (int i = 0; i < 100; i++)
    this->_ideas[i] = src._ideas[i];
  return (*this);
}

Brain::~Brain(void) {}

std::string Brain::getIdea(int index) const
{
  return (this->_ideas[index]);
}

void Brain::setIdea(const std::string &ideas, int index)
{
  this->_ideas[index] = ideas;
}
