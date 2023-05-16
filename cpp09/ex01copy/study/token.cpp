#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> tokenize(const std::string &expression) {
  std::vector<std::string> tokens;
  std::string token;
  
  for (char c : expression) {
    if (std::isspace(c)) 
	{
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

int main() {
  std::string expression;
  std::cout << "Enter an expression: ";
  std::getline(std::cin, expression);

  std::vector<std::string> tokens = tokenize(expression);

  std::cout << "Tokens: ";
  for (const auto &token : tokens) {
    std::cout << token << "\t";
  }
  std::cout << std::endl;

  return 0;
}
