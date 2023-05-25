#include <list> 
#include <iostream> 
class A
{
	public:
	int a = 5;
	int b = 3;
};

std::list<int> f(int a, int b)
{
	std::list<int> res;
	a = 10;
	b = -1000;
	res.push_back(a);
	res.push_back(b);

		
	return (res);
}

int main ()
{
	A a;
	a.a;
	a.b;
	std::list<int> res = f(a.a, a.b);
	using namespace std;

	for (int num : res)
	{
		cout << num << " " << endl;
	}
	// cout << res << endl;
}