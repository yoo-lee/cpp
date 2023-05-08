#include "RPN.hpp"
#include <vector>
#include <stack>
#include <stdexcept>

std::vector<std::string> tokenize(const std::string &expression) {
  std::vector<std::string> tokens;
  std::string token;
  for (char c : expression) {
    if (std::isspace(c)) {
      if (!token.empty()) {
        tokens.push_back(token);
        token.clear();
      }
    } else {
      token += c;
    }
  }
  if (!token.empty()) {
    tokens.push_back(token);
  }
  return tokens;
}

double RPN::evaluate(const std::string &expression) {
  std::vector<std::string> tokens = tokenize(expression);
  std::stack<double> stack;

  for (const auto &token : tokens) {
    if (token == "+") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for + operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs + rhs);
    } else if (token == "-") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for - operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs - rhs);
    } else if (token == "*") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for * operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs * rhs);
    } else if (token == "/") {
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
    } else {
      try {
        double value = std::stod(token);
        stack.push(value);
      } catch (const std::exception &e) {
        throw std::runtime_error("Invalid operand: " + token);
      }
    }
  }
  if (stack.size() != 1) {
    throw std::runtime_error("Invalid expression");
  }
  return stack.top();
}
