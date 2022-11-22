#include<iostream>
#include<string>

using namespace std;

class Teacher {
    std::string  mName;   // 名前
    int          mAge;    // 年齢

public:
    void SetData(std::string name, int age);

    // 年齢を加算する
    void IncAge();
};

void Teacher::SetData(std::string name, int age)
{
    mName = name;
    mAge = age;
}

void Teacher::IncAge()
{
    mAge++;
}

class Student {
    std::string  mName;   // 名前
    int          mGrade;  // 学年
    int          mScore;  // 得点

    const Teacher* mMyTeacher;  // 自身を担当している先生

public:
    void SetData(std::string name, int grade, int score, const Teacher* teacher);
};

void Student::SetData(std::string name, int grade, int score, const Teacher* teacher)
{
    mName = name;
    mGrade = grade;
    mScore = score;
    mMyTeacher = teacher;
}

int main()
{
    Teacher ikeda;
    ikeda.SetData("Ikeda Naohiro", 41);

    Student student;
    student.SetData("Saitou Hiroyuki", 2, 80, &ikeda);

    ikeda.IncAge();
}