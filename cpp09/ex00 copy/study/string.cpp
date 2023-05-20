#include <cstring>  // For string manipulation functions like strlen, strcpy, etc.

class String {
private:
    char* m_data;  // Pointer to character array to store the string
    std::size_t m_length;  // Length of the string

public:
    // Default constructor
    String() : m_data(nullptr), m_length(0) {}

    // Constructor with string literal
    String(const char* str) {
        m_length = std::strlen(str);  // Calculate the length of the input string

        m_data = new char[m_length + 1];  // Allocate memory for the string (+1 for null terminator)
        std::strcpy(m_data, str);  // Copy the input string to the allocated memory
    }

    // Copy constructor
    String(const String& other) {
        m_length = other.m_length;
        m_data = new char[m_length + 1];
        std::strcpy(m_data, other.m_data);
    }

    // Destructor
    ~String() {
        delete[] m_data;  // Release the dynamically allocated memory
    }

    // Getter for the string
    const char* c_str() const {
        return m_data;
    }

    // Getter for the length of the string
    std::size_t length() const {
        return m_length;
    }
};

int main() {
    String str1("Hello");
    String str2 = str1;  // Copy constructor

    std::cout << "str1: " << str1.c_str() << ", length: " << str1.length() << std::endl;
    std::cout << "str2: " << str2.c_str() << ", length: " << str2.length() << std::endl;

    return 0;
}
