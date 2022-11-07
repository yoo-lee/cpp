//student.cpp

#include "student.hpp"
#include <iostream>

void Student::SetData(std::string name, int grade, int score)
{
	mName = name;
	mGrade = grade;
	mScore = score;
}

void Student::Print()
{
    std::cout << "mName: " << mName << "\n"
              << "mGrade: " << mGrade << "\n"
              << "mScore: " << mScore << std::endl;
}



// Studentクラスを定義して、２人の生徒の
// オブジェクトをインスタンス化してください。
// Studentクラスは、student.cpp と 
// student.h に分けて書くようにしてみましょう。

