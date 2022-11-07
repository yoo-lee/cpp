#include "student.hpp"


void Student::setdata(std::string name, int grade, int score)
{
	mname = name;
}

void Student::Print()
{
	  std::cout << "mName: " << mName << "\n"
              << "mGrade: " << mGrade << "\n"
              << "mScore: " << mScore << std::endl;
}

std::strig student::Getname()
{
	return mName;
}

int Student::Getscore()
{
	return mScore;
}