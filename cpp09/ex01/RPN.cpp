#include "RPN.hpp"
#include <vector>
#include <stack>
#include <stdexcept>


// The code you provided seems to implement a class RPN with a member function evaluate that evaluates a given expression in Reverse Polish Notation (RPN). Here's a breakdown of the code:

// The tokenize function takes an expression string and splits it into individual tokens based on whitespace. It returns a vector of tokens.

// The evaluate function takes an expression string and evaluates it using the RPN algorithm. It first tokenizes the expression using the tokenize function and then processes each token.

// Inside the token processing loop, if the token is an operator (+, -, *, /), it pops the necessary number of operands from the stack, performs the corresponding operation, and pushes the result back to the stack.

// If the token is a numeric operand, it converts it to a double using std::stod and pushes it onto the stack.

// If the token is neither an operator nor a valid operand, it throws a std::runtime_error with an appropriate error message.

// After processing all the tokens, it checks if there is exactly one value remaining on the stack. If not, it throws an error indicating an invalid expression.

// Finally, it returns the top value from the stack, which represents the evaluated result of the RPN expression.

// Overall, the code appears to handle the given constraints mentioned earlier,
//  such as accepting an RPN expression as an argument, supporting operators +, -, *, /, handling errors, and using a stack to perform the evaluation.

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
