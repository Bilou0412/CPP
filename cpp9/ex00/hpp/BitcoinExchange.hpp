#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <map>
#include <utility>
#include <cstring>
#include <string>
#include <iomanip>
#include "DataFile.hpp"
class DataFile;
class BitcoinExchange
{
public:
  // Constructor
  BitcoinExchange(DataFile bdd, DataFile input);
  BitcoinExchange(const BitcoinExchange &copy);

  // Destructor
  ~BitcoinExchange();

  // Operator Overload
  BitcoinExchange &operator=(const BitcoinExchange &src);

  // Getter
  size_t getSize() const;
  std::string *getLog() const;

private:
  std::string *_logBicoin;
  size_t _size;
};
std::ostream &operator<<(std::ostream &os, const BitcoinExchange &exchange);

#endif