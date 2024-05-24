#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
public:
	static void convert(const std::string &input);

private:
	ScalarConverter &operator=(const ScalarConverter &other);
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter();
	~ScalarConverter();
};

bool isInt(const std::string &input);
bool isDouble(const std::string &input);
bool isChar(const std::string &input);
bool isFloat(const std::string &input);
void toChar(const std::string &str);
void toInt(const std::string &str);
void toFloat(const std::string &str);
void toDouble(const std::string &str);

#endif
