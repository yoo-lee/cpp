#include <iostream>
#include <string>
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

double evaluate(const std::string &input) {
  std::vector<std::string> tokens = tokenize(input);
  std::stack<double> stack;

  for (const auto &token : tokens)
{
    std::cout << "Processing token: " << token << std::endl;

    if (token == "+") 
	{
      std::cout << "Operator: +" << std::endl;
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for + operator");
    }

      double rhs = stack.top();
	  using namespace std;
	  		cout << "rhs = "<< stack.top()<< endl;
      stack.pop();

      double lhs = stack.top();
	  		cout << "lhs = "<< stack.top()<< endl;
      stack.pop();

      double result = lhs + rhs;
      std::cout << "Performing addition: " << lhs << " + " << rhs << " = " << result << std::endl;
      stack.push(result);
}
    // Add code for other operators here

    // If the token is not an operator, assume it is an operand
    else {
      double operand = std::stod(token);
      std::cout << "Operand: " << operand << std::endl;
      stack.push(operand);
    }
  }

  if (stack.size() != 1) {
    throw std::runtime_error("Invalid expression");
  }

  double result = stack.top();
  stack.pop();
  return result;
}

int main() {
  std::string input = "2 3 +";
  try {
    double result = evaluate(input);
    std::cout << "Result: " << result << std::endl;
  } catch (const std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
