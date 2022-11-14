#include <iostream>

using namespace std;

class Sut 
{
	private:
		int num;
	public:
		void setNum (int x);
};

void Sut::setNum(int x)
{
	num = x;
	cout << num << endl;
}

int main ()
{
	Sut Yukan;
	Yukan.setNum(10);
	return (0);
}