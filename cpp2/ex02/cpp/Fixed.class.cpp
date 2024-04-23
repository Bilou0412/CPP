#include "../hpp/Fixed.class.hpp"

Fixed::Fixed(void) : _nbFixedVal(0)
{
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed::Fixed(const int &convertFixed)
{
  std::cout << "Int constructor called" << std::endl;
  this->_nbFixedVal = convertFixed << _nbBitsFrac;
}
Fixed::Fixed(const float &convertFixed)
{
  std::cout << "Float constructor called" << std::endl;
  this->_nbFixedVal = roundf(convertFixed * (1 << _nbBitsFrac));
}
Fixed &Fixed::operator=(const Fixed &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &f)
    this->_nbFixedVal = f._nbFixedVal;
  return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
  os << f.toFloat();
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

void Fixed::setRawBits(int const &raw)
{
  this->_nbFixedVal = raw;
}

float Fixed::toFloat(void) const
{
  float raw = (float)this->_nbFixedVal / (1 << this->_nbBitsFrac);
  return ((float)(raw));
}

int Fixed::toInt(void) const
{
  return (this->_nbFixedVal >> this->_nbBitsFrac);
}

bool Fixed::operator<(const Fixed &f) const
{
  return (this->_nbFixedVal < f._nbFixedVal);
}

bool Fixed::operator>(const Fixed &f) const
{
  return (this->_nbFixedVal > f._nbFixedVal);
}

bool Fixed::operator<=(const Fixed &f) const
{
  return (this->_nbFixedVal <= f._nbFixedVal);
}

bool Fixed::operator>=(const Fixed &f) const
{
  return (this->_nbFixedVal >= f._nbFixedVal);
}

bool Fixed::operator==(const Fixed &f) const
{
  return (this->_nbFixedVal == f._nbFixedVal);
}

bool Fixed::operator!=(const Fixed &f) const
{
  return (this->_nbFixedVal != f._nbFixedVal);
}

Fixed Fixed::operator-(const Fixed &f) const
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal - f._nbFixedVal;
  return (ret);
}

Fixed Fixed::operator*(const Fixed &f) const
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal * f._nbFixedVal;
  ret._nbFixedVal /= 256;
  return (ret);
}

Fixed Fixed::operator/(const Fixed &f) const
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal / f._nbFixedVal;
  return (ret);
}

Fixed Fixed::operator+(const Fixed &f) const
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal + f._nbFixedVal;
  return (ret);
}

Fixed Fixed::operator++()
{
  Fixed ret;
  (this->_nbFixedVal)++;
  ret._nbFixedVal = this->_nbFixedVal;
  return (ret);
}

Fixed Fixed::operator--()
{
  Fixed ret;
  (this->_nbFixedVal)--;
  ret._nbFixedVal = this->_nbFixedVal;
  return (ret);
}

Fixed Fixed::operator++(int)
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal;
  ++(this->_nbFixedVal);
  return (ret);
}

Fixed Fixed::operator--(int)
{
  Fixed ret;
  ret._nbFixedVal = this->_nbFixedVal;
  --(this->_nbFixedVal);
  return (ret);
}