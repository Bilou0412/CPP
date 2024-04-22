#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Fixed
{
public:
  Fixed(void);
  Fixed(const Fixed &f);
  Fixed(const int &convertFixed);
  Fixed(const float &convertFixed);
  ~Fixed(void);
  Fixed &operator=(const Fixed &f);
  friend std::ostream &operator<<(std::ostream &os,const Fixed &f);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

private:
  int _nbFixedVal;
  const int _nbBitsFrac;
};

#endif