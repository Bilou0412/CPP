#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <stdio.h>
#include <cstdlib>
#include <exception>
template <class T>
class Array
{
public:
  // Constructeur
  Array()
  {
    _element = NULL;
    _size = 0;
  }

  Array(unsigned int n):_element(new T [n]), _size(n) {}
  
  Array(const Array &cpy)
  {
    _element = new T[cpy.getSize()];
    _size = cpy.getSize();
    for (int i = 0; i < cpy.getSize(); i++)
      _element[i] = cpy._element[i];
  }

  // Destructeur
  ~Array()
  {
    if (_element != NULL)
      delete[] _element;
  }

  // Surcharge operateur
  Array &operator=(const Array &src)
  {
    if (src.getSize())
      delete[] _element;
    if (src.getSize() != 0)
    {
      _size = src.getSize();
      _element = new T[src.getSize()];
      for (int i = 0; i < src.getSize(); i++)
        _element[i] = src._element[i];
    }
    return (*this);
  }

  // Exception
  class OutOffbounds : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return (" Index is out of bounds");
    }
  };

  T &operator[](int i)
  {

    if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
      throw OutOffbounds();
    return (this->_element[i]);
  }

  const  T &operator[](int i) const
  {

    if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
      throw OutOffbounds();
    return (this->_element[i]);
  }

  // Getter
  int getSize() const
  {
    return (_size);
  }

private:
  T *_element;
  unsigned int _size;
};

#endif