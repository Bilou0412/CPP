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
  ~Fixed(void);
  Fixed &operator=(const Fixed &f);
  int getRawBits(void) const;
  void setRawBits(int const raw);

private:
  int _nbFixedVal;
  const int _nbBitsFrac;
};

#endif