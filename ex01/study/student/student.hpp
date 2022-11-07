// student.h

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <string>

class Student
{
	std::string mName;
	int		mGrade;
	int		mScore;
	public;
	void SetData(std::string name, int grade, int score);
	void Print();
}


// Studentクラスを定義して、２人の生徒の
// オブジェクトをインスタンス化してください。
// Studentクラスは、student.cpp と 
// student.h に分けて書くようにしてみましょう。

