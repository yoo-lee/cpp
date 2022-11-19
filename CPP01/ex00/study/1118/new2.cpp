#include <iostream>
using namespace std;

int main ()
{
int *i = new int ();
int p;
i = &p;
*i = 10000;
cout << p << endl;
}

// int* p1 = new int(100);  // p1 は new で確保されたメモリ領域を指すポインタ
// int* p2 = new int[5];    // 配列の場合は [] を付ける
