#include <iostream>
using namespace std;

class old_sut
{
	public:
		old_sut();
		old_sut(string name);
    	string o_name;
        int num;
    protected:
};

class new_sut : public old_sut
{
    public:
		void announce(string name);
    	void    set(int x);
};

void new_sut::set(int x)
{
    num =x;
}

void new_sut::announce(string name)
{
	o_name = name; 
    cout << o_name << endl;
}

int main ()
{
    new_sut obj;
    new_sut obj2;
    obj.set(10);
    obj2.set(10);
	
	// obj.announce("dfasdfa");
    return 0;
}
