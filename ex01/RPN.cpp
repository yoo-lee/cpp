#include "RPN.hpp"
#include <stack>
#include <stdexcept>
#include <iostream>

double RPN::evaluate(const std::string &input) 
{
	std::stack<double> stack;

for (char c : input)
{
    if (std::isspace(c)) 
		continue;
	else if (c == '+') 
	{
		if (stack.size() < 2) 
			throw std::runtime_error("Not enough operands for + operator");
	double rhs = stack.top();
	using namespace std;
	// cout << "stack.top() = "<<stack.top() << endl;
	stack.pop();
	double lhs = stack.top();
	// cout << "stack.top() = "<<stack.top() << endl;
	stack.pop();
	stack.push(lhs + rhs);
	// cout << "stack.top() = "<<stack.top() << endl;
	} 
	else if (c == '-')
	{
      if (stack.size() < 2)
        throw std::runtime_error("Not enough operands for - operator");
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs - rhs);
    } 
	else if (c == '*')
	{
    	if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for * operator");
    }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs * rhs);
    } 
	else if (c == '/')
	{
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for / operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      if (rhs == 0) {
        throw std::runtime_error("Division by zero");
    }
    stack.push(lhs / rhs);
	} 
	else if (c >= '0' && c <= '9')
	{
		stack.push(c - '0');
    }
	else 
	{
      throw std::runtime_error("Invalid character: " + std::string(1, c));
    }
}

  if (stack.size() != 1) {
    throw std::runtime_error("Invalid input");
  }

  return stack.top();
}
