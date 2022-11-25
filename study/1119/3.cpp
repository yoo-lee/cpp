#include<iostream>
#include<string>

using namespace std;

class Z
{
    private:
    	string s;
    	
    public:
    	// Z();
    	// Z(char *y);
   	 	// Z(string x);
   	 	void Z(string t);
    	// ~Z();
};

   	 	void Z::Z(string t)
        {
            
            s = t;
            cout << s; 
        }

int main ()
{
    Z obj;
    obj.Z("dkfyaou");
}