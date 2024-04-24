#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
public:
  Fixed(void);
  Fixed(const Fixed &f);
  Fixed(const int &convertFixed);
  Fixed(const float &convertFixed);
  ~Fixed(void);
  Fixed &operator=(const Fixed &f);

  int getRawBits(void) const;
  void setRawBits(int const &raw);
  float toFloat(void) const;
  int toInt(void) const;
  bool operator<(const Fixed &f) const;
  bool operator>(const Fixed &f) const;
  bool operator<=(const Fixed &f) const;
  bool operator>=(const Fixed &f) const;
  bool operator==(const Fixed &f) const;
  bool operator!=(const Fixed &f) const;
  Fixed operator-(const Fixed &f) const;
  Fixed operator*(const Fixed &f) const;
  Fixed operator/(const Fixed &f) const;
  Fixed operator+(const Fixed &f) const;
  Fixed operator++();
  Fixed operator--();
  Fixed operator++(int);
  Fixed operator--(int);
  static Fixed min(Fixed &a, Fixed &b);
  static Fixed min(const Fixed &a, const Fixed &b);
  static Fixed max(Fixed &a, Fixed &b);
  static Fixed max(const Fixed &a, const Fixed &b);

private:
  int _nbFixedVal;
  static const int _nbBitsFrac = 8;
};
std::ostream &operator<<(std::ostream &os, const Fixed &f);
#endif