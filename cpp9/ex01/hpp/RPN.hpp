#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>
class Rpn
{
public:
  // Constructor
  Rpn(char *mathExpression);
  Rpn(const Rpn &cpy);

  // Destructor
  ~Rpn();

  // Operator overload
  Rpn &operator=(const Rpn &src);

  // Public function

  // Getter
  std::stack<int> getStack() const;

private:
  Rpn();
  bool checkArg(char *mathExpression) const;
  std::stack<int> makeCalc(std::stack<int>, char op);
  std::stack<int> _stack;
};
std::ostream &operator<<(std::ostream &os, const Rpn &result);

#endif