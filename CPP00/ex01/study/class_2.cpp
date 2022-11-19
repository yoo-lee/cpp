
#include <string>
#include <iostream>

class Student {
public:
    Student();
    Student(std::string name, int grade, int score);

    void SetData(std::string name, int grade, int score);
    void Print();

private:
    std::string  mName;   // 名前
    int          mGrade;  // 学年
    int          mScore;  // 得点
};

#include <iostream>

Student::Student() :
    mName("no name"), mGrade(0), mScore(0)
{
}

Student::Student(std::string name, int grade, int score) :
    mName(name), mGrade(grade), mScore(score)
{
}

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

}
