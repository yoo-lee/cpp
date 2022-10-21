#include <iostream>
#include "sample.h"
// ヘッダーファイルの管理

void Student::show()
{
	cout << "番号" << num << endl;
}


class Student
{
	public:
	int num;
	void show();
}

int main ()
{
	Student Tarou;
	Tarou.num;

}

