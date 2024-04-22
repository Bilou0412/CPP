#include "../hpp/Fixed.class.hpp"

Fixed::Fixed(void) : _nbFixedVal(0), _nbBitsFrac(8)
{
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) : _nbBitsFrac(8)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed::Fixed(const int &convertFixed) : _nbBitsFrac(8)
{
  std::cout << "Int constructor called" << std::endl;
  this->_nbFixedVal = convertFixed << _nbBitsFrac;
}
Fixed::Fixed(const float &convertFixed) : _nbBitsFrac(8)
{
  std::cout << "Float constructor called" << std::endl;
  this->_nbFixedVal = static_cast<int>(convertFixed) << _nbBitsFrac;
}
Fixed &Fixed::operator=(const Fixed &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &f)
    this->_nbFixedVal = f._nbFixedVal;
  return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
  os << f._nbFixedVal;
  return os;
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

float Fixed::toFloat(void) const
{
  int raw = this->_nbFixedVal >> this->_nbBitsFrac;
  return (static_cast<float>(raw));
}

int Fixed::toInt(void) const
{
  return (this->_nbFixedVal >> this->_nbBitsFrac);
}
