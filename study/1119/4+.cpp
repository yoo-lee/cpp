#include<iostream>
#include<string>

using namespace std;

class Z
{
    private:
    	string s;
    	string s2;
    	int n,m;
    public:
    	Z();
    	// Z(char *y);
   	 	// Z(string x);
   	 	Z(string t);
    	~Z();
};


    Z::Z(string t)
    {
        s2 = new char;
        t = new char;
        cin >> t;
        s2 = t;
        cout << s2 << endl;
    }
// Z::Z(char *y)
// {
//     s2 = y;
//     cout << s2 << endl;
// }

Z::~Z()
{
    cout << "end" << endl;
}

int main()
{
 Z y();
 Z x("dfaf");
 Z x2("dfafdfadfa");
//  Z x2("abcdef");
 return 0;   
}