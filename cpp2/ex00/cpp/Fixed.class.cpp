#include "Fixed.class.hpp"

Fixed::Fixed(void) : _nbBitsFrac(8), _nbFixedVal(0)
{
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) : _nbFixedVal(f._nbFixedVal), _nbBitsFrac(f._nbBitsFrac)
{
  std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &f)
{
  if (this != &f)
    this->_nbFixedVal = f._nbFixedVal;
  return *this;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}
