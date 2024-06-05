#ifndef DATAFILE_HPP
#define DATAFILE_HPP

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

class DataFile
{
public:
  // Constructor
  DataFile(const char *name);
  DataFile(const DataFile &copy);

  // Destructor
  ~DataFile();

  // Operator Overload
  DataFile &operator=(const DataFile &src);

  // Getter
  std::multimap<std::string, double> getCsv() const;

  // Public Function
  size_t nbLineMap() const;
  double valOfKey(const std::string &date) const;

private:
  std::string checkInput(const std::string &firstL);
  std::string checkValue(const std::string &date, double value);
  char wichTypeFile(const char *name);
  std::multimap<std::string, double> _data;
};
std::ostream &operator<<(std::ostream &os, const DataFile &csv);
#endif