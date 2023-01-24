# include <iostream>
#include <exception>



class InvalidArgumentException : public std::exception {
    virtual const char* what() const throw();
};

const char *InvalidArgumentException::what() const throw() {
    return "Invalid argument";
}

void sub_task() 
{
    if (0)
        return;
    else
        // throw "error occurred";
        // throw 1;
        // throw "abc";
		InvalidArgumentException();
}
int main () {
    // try {
    //     sub_task();
    // } catch (std::string const &e   /* 受け取りたいオブジェクトの型 */) {
    //     std::cout << e << std::endl;
    // } catch (int num) {             // catch節は複数書ける
    //     std::cout << num << std::endl;
    // } catch (...) {                 // ...でどんな型でも受け取れる
    //     std::cout << "error occurred!";

try 
{
    sub_task();
}
 catch (std::exception const &e) {
    std::cout << e.what() << std::endl;
}
}
