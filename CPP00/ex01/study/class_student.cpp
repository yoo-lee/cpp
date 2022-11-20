#include <iostream>
#include <string>

using namespace std;
class Student {
public:
    Student();  // コンストラクタ

    void SetData(std::string name, int grade, int score);
    void Print();

    std::string  mName;   // 名前
private:
    int          mGrade;  // 学年
    int          mScore;  // 得点
};

class T
{
    public:
    Student Yukan;
    int sut[9];
    void Print();
};

void T::Print()
{
    
    T t;
    std::cout << t.sut[0] << std::endl;
    std::cout << Yukan.mName << std::endl;

}

Student::Student() :
    mName("yu"), mGrade(0), mScore(0)
    {}

void Student::SetData(std::string name, int grade, int score)
{
    mName = name;
    mGrade = grade;
    mScore = score;
}

void Student::Print()
{
    std::cout << mName << " "
              << mGrade << " "
              << mScore << std::endl;
}

int main ()
{
    Student sut;
    sut.Print();
    sut.SetData("dfhao", 1 ,3);
    sut.Print();
    T a;
    a.Print();
}
