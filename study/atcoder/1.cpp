#include<iostream>

using namespace std;

int main (int ac, char **av)
{

if (*av[0] == 'a'|| 'e'||'i'||'o'||'u')
return ("vowel");
else
return ("consonant");
}
