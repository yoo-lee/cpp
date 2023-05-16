#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>

class RPN {
public:
    double evaluate(const std::string& input);

private:
    std::stack<double> stack;
};

#endif
