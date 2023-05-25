#include<iostream>
#include<string>

using namespace std;
// bool f(string T)
// {
// ('A' =< T && 'Z' >= T)
// }

int main ()
{
    string S;

    cin >> S;

    if (S.find('b') != string::npos)
    {cout << 'B';
    return(1);}
    else
    cout << "f";
    return(-1);
}
