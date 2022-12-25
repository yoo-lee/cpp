#include <iostream>

using namespace std;

    float toFloat(void)
    {
		int Fixeded_point_number = 4;
        return ((float) Fixeded_point_number /(float)(1 << 8) );
    }


int main()
 {
	cout << toFloat() <<endl;
 }