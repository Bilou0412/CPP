#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <string>
#include <iostream>
#include <iomanip>
class Harl
{
public:
  Harl(void);
  ~Harl(void);
  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void (Harl::*call_func[4])();
  std::string levelTab[4];
};

#endif