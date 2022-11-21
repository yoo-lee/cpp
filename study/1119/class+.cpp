#include <iostream>
using namespace std;

class old_sut
{
	private:
		char * o_name;
	public:
		old_sut();
		old_sut(string name);
	void	set(char * s);
	char * s get();
};

void	set(char * s)
{
	o_name = s;
}

char * get()
{
	cout << o_name << endl;	
}

old_sut::old_sut(string name)
{
	o_name = name;
	cout << o_name << endl;
}

old_sut::old_sut()
{
	cout << " 1" << endl;
}

int main ()
{
	old_sut zom;
	old_sut("dsfadsf");
	cout << zom.o_name << endl; 
}
