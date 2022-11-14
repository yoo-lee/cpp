
#include <iostream>

using namespace std;

class stu
{
	private:
		int num;
	public:
		void setNum(int x);//parameter
		int getNum();// return value		
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
	Yukan.setNum(25);
	int res = Yukan.getNum();
	cout << res << "\n";
}