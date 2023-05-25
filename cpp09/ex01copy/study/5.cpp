double evaluate(const std::string &input) {
  std::vector<std::string> tokens = tokenize(input);
  std::stack<double> stack;

for (const auto &token : tokens) {
    if (token == "+"){
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for + operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs + rhs);
	}

}