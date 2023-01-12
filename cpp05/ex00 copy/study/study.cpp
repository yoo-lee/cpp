#include <iostream>
#include <cstdlib>
 
int
main(int argc, char const* argv[]) try
{
        throw "exception";
 
        return 0;
} catch (const char* e) {
        std::cerr << e << std::endl;
}