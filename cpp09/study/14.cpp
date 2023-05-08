
#include <string>
#include <iostream>
#include <map>

using namespace std;
int main ()
{
std::map<std::string, int> mp;    //  文字列 → 整数 の連想配列
    mp["abc"] = 123;
	// mp["yoo"] = 234;

cout << mp["abc"] << endl;
cout << mp["yoo"] << endl;


auto it = mp.find("ab");
if (it != mp.end())
cout << it-> second << endl;
else
cout << "not found" << endl;

}
