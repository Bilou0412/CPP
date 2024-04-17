#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Harl
{
public:
  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif