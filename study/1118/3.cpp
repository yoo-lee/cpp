#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int * pArray = NULL; //  配列の動的メモリ確保

    for (int i; i < 5; i++)
    {
    int * pArray = new int[i]; //  配列の動的メモリ確保
        pArray[i] = i;
	cout << pArray[i] <<endl;
    }


    for (int i=0; i < 5; i++)
	cout << pArray[i] <<endl;
     // delete[] pArray;              //  配列の動的メモリ解放
	// system("leaks ./a.out");
    return 0;
}