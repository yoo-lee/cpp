#include <stdio.h>
#include <iostream>
using namespace std;
class POS
{
public:
    int x;
    int y;
    int z;
    POS(const POS& p);
    POS(int tmpx, int tmpy, int tmpz);
};

//  引数付きのコンストラクタ
POS::POS(int tmpx, int tmpy, int tmpz)
{
    x = tmpx;
    y = tmpy;
    z = tmpz;
}

POS::POS(const POS& p)
{
    cout << "copy" << endl;
    x = p.x;
    y = p.y;
    z = p.z;
}

int main()
{
    POS posA(100, 200, 300);     //  初期化
    {
        POS posB = posA;    //  コピーによる初期化

        posB = posA;        //  代入
    }

    return 0;
}

// int main()
// {
//     POS posA(100, 200);     //  初期化
//     {
//         POS posB = posA;    //  コピーによる初期化

//         posB = posA;        //  代入
//     }

//     return 0;
// }


// int main()
// {
//     POS posA(100, 200); //  posAに対するコンストラクタ呼び出し

//     POS posB = posA;    //  posBに対するコピーコンストラクタ呼び出し

//     printf("posB.x:%d posB.y:%d", posB.x, posB.y);

//     return 0;
// }
