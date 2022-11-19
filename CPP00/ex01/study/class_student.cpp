#include <iostream>
#include <string>

class Student {
public:
    Student();  // コンストラクタ

    void SetData(std::string name, int grade, int score);
    void Print();

private:
    std::string  mName;   // 名前
    int          mGrade;  // 学年
    int          mScore;  // 得点
};

Student::Student() :
    mName("yukan"), mGrade(0), mScore(0)
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
}
