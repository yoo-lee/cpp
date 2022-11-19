#include<iostream>
#include<string>

using namespace std;

int main ()
{
    char c;
    cin >> c;
    string str = "aieuo";
    // cout <<str.find(c) << endl;
    if(str.find(c))
    {cout << "vowel" << endl;}
    else
    {cout << "consonant" << endl;}

    return 0;
}
