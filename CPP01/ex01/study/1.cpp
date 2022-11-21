#include <stdio.h>
using namespace std;

int main()
{
    char *pstr;

    pstr = new char[6];
    pstr[0] = 1;
    pstr[1] = 2;
    pstr[2] = 3;
    pstr[3] = 4;
    pstr[4] = 5;
    pstr[5] = 6;
    pstr[6] = 50;
    pstr[7] = 51;
    // pstr[8] = 32;
    // pstr[9] = 37;
    // pstr[10] = 100;
    // pstr[11] = 10;
    // pstr[12] = 0;
    int c;
    
    c = 0;
    while(c < 13)
    {
        printf("%d\n" , pstr[c]);
        c = c+1;
    }
	std::cout << pstr << std::endl;
    return 0;
}