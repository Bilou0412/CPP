#include "Fixed.class.hpp"

Fixed::Fixed(void) : _nbFixedVal(0), _nbBitsFrac(8)
{
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) : _nbBitsFrac(f._nbBitsFrac)
{
  std::cout << "Copy constructor called" << std::endl;
  this->_nbFixedVal = f.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &f)
    this->_nbFixedVal = f.getRawBits();
  return (*this);
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_nbFixedVal);
}

void Fixed::setRawBits(int const raw)
{
  this->_nbFixedVal = raw;
}
