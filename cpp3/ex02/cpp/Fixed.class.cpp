#include "../hpp/Fixed.class.hpp"

Fixed::Fixed(void) : _nbFixedVal(0)
{
}
Fixed::Fixed(const Fixed &f)
{
  *this = f;
}

Fixed::Fixed(const int &convertFixed)
{
  this->_nbFixedVal = convertFixed << _nbBitsFrac;
}
Fixed::Fixed(const float &convertFixed)
{
  this->_nbFixedVal = roundf(convertFixed * (1 << _nbBitsFrac));
}
Fixed &Fixed::operator=(const Fixed &f)
{
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
}

int Fixed::getRawBits(void) const
{
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
Fixed Fixed::min(Fixed &a, Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}
Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}
Fixed Fixed::max(Fixed &a, Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (b);
  return (a);
}
Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (b);
  return (a);
}