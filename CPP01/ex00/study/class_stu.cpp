
#include <iostream>

using namespace std;

class stu
{
	private:
		string name;
		int num;
	public:
		stu(int num, string name);
		void setNum(int x);//parameter
		void setNum(string name);//parameter
		int getNum();// return value
		int getname(string name);// return value

};
// getter/setterなぜ必要
// かき間違いが少なくなる。
// どこで値を設定、得られるか　可読性が上がる。

void stu::setNum(int x)
{
	num = x;
}

int stu::getNum()
{
	return (num);
}

int main ()
{
	stu Yukan;
	int n;
	cing << n;
	cout << make
	cin << str
	Yukan.getname
	int res = Yukan.getNum();
	cout << res << "\n";
}
