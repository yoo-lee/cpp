#include <cstdio>

// 時計を表すクラス
class Clock
{
protected:
    int hour;
    int minute;
public:
    Clock(int h, int m) : hour(h), minute(m) { }

    Clock(int h, int m) : hour(h), minute(m)
    virtual void print();
};

// チャイム付きの時計を表すクラス
class ChimeClock : public Clock   // Clock クラスを継承
{
public:
    ChimeClock(int h, int m) : Clock(h, m) { }
    void print();    // print 関数をオーバーライド
};

void Clock::print()
{
    printf("%02d:%02d\n", this->hour, this->minute);
    fflush(stdout);
}

void ChimeClock::print()
{
    Clock::print();
    if (this->minute == 0) printf("ring!\n");
    fflush(stdout);
}

int main()
{
    Clock c1(5, 0);
    c1.print();     // 出力: 05:00

    ChimeClock c2(6, 0);
    c2.print();     // 出力: 06:00, ring!
}