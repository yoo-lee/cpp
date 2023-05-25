#include "RPN.hpp"
#include <stack>
#include <stdexcept>
#include <iostream>
#include <cctype>

double RPN::evaluate(const std::string& input)
{
    std::stack<double> stack;

    for (std::string::size_type i = 0; i < input.size(); ++i)
    {
        char c = input[i];
        if (std::isspace(c))
            continue;
        else if (c == '+')
        {
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands for + operator");
            double rhs = stack.top();
            stack.pop();
            double lhs = stack.top();
            stack.pop();
            stack.push(lhs + rhs);
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
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands for * operator");
            double rhs = stack.top();
            stack.pop();
            double lhs = stack.top();
            stack.pop();
            stack.push(lhs * rhs);
        }
        else if (c == '/')
        {
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands for / operator");
            double rhs = stack.top();
            stack.pop();
            double lhs = stack.top();
            stack.pop();
            if (rhs == 0)
                throw std::runtime_error("Division by zero");
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

    if (stack.size() != 1)
    {
        throw std::runtime_error("Invalid input");
    }

    return stack.top();
}
