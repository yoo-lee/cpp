#include <stdio.h>

class POS
{
private:
    int x;
    int y;

public:
    POS(int tmpx, int tmpy);
    void printPos();
};

//  コンストラクタ
POS::POS(int tmpx, int tmpy)
{
    this->x = tmpx;
    this->y = tmpy;
}

//  座標表示
void POS::printPos()
{
    printf("x:%d y:%d", this->x, this->y);
}

int main()
{
    POS posA(100, 200);

    posA.printPos();

    return 0;
}