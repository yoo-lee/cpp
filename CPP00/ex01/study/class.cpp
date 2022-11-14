#include <iostream>

class Student {
    std::string  mName;   // 名前
    int          mGrade;  // 学年
    int          mScore;  // 得点

public:
    void SetData(std::string name, int grade, int score);
    void phonebook(std::string name, int grade, int score);
    void print(std::string name, int grade, int score);
};

void Student::phonebook(std::string name, int grade, int score)
{
    mName = name;
    mGrade = grade;
    mScore = score;
}

void Student::SetData(std::string name, int grade, int score)
{
    mName = 1;
    mGrade = grade;
    mScore = score;
}


		
int main()
{
    Student student;
    student.SetData("Saitou Hiroyuki", 2, 80);
}
