#include "RPN.hpp"
bool Rpn::checkArg(char *mathExpression) const
{
  std::string validChar("0123456789+-*/ ");
  for (int i = 0; mathExpression[i]; i++)
    if (validChar.find(mathExpression[i]) == std::string::npos)
      return (1);
  return (0);
}

std::stack<int> Rpn::makeCalc(std::stack<int> stack, char op)
{
  int result, pre;
  pre = stack.top();
  stack.pop();
  if (op == '*')
    result = stack.top() * pre;
  else if (op == '+')
    result = stack.top() + pre;
  else if (op == '-')
    result = stack.top() - pre;
  else if (op == '/' && pre != 0)
    result = stack.top() / pre;
  else
    throw std::runtime_error("Error : Divide by 0");
  std::cout << stack.top() << op << pre << std::endl;
  stack.pop();
  stack.push(result);
  return (stack);
}

Rpn::Rpn(char *mathExpression)
{
  std::string mathStr(mathExpression);
  std::string op("+-*/");
  if (checkArg(mathExpression))
    throw std::runtime_error("Error : Bad argument");
  for (int i = 0; mathStr[i]; i++)
  {
    if (isdigit(mathStr[i]))
      _stack.push(mathStr[i] - 48);
    else if (op.find(mathStr[i]) != std::string::npos)
    {
      if (_stack.size() < 2)
        throw std::runtime_error("Error : Bad argument");
      _stack = makeCalc(_stack, mathStr[i]);
    }
  }
}

Rpn::Rpn(const Rpn &cpy)
{
  *this = cpy;
}
Rpn::~Rpn() {}

Rpn &Rpn::operator=(const Rpn &src)
{
  _stack = src._stack;
  return (*this);
}

std::stack<int> Rpn::getStack() const
{
  return (_stack);
}

std::ostream &operator<<(std::ostream &os, const Rpn &result)
{
  if (result.getStack().size() == 1)
    os << result.getStack().top();
  else
    os << "Error";
  return (os);
}