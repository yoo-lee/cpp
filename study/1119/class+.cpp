#include <iostream>
using namespace std;

class old_sut
{
	private:
	public:
		string o_name;
		old_sut();
		old_sut(string name);
	void	set(char * s);
	void 	 get();
};

void	set(char * s)
{
	o_name = s;
}

void get()
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
