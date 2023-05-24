#include "Exception.hpp"

Exception::ErrorFile::ErrorFile(const std::string tmp) : _str("Error: " + tmp) {}

const char* Exception::ErrorFile::what() const throw() {
    return _str.c_str();
}

Exception::ErrorData::ErrorData(const std::string tmp) : _str("Error: " + tmp) {}

const char* Exception::ErrorData::what() const throw() {
    return _str.c_str();
}
