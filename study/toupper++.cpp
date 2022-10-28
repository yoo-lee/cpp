#include <ctype.h>
#include <stdio.h>
#include <iostream>

using namespace std;
 int main ()
 {
int i , j;
int m[] = {1, 2 ,3};
i = 0;
j =0;
const char *s = "dfnakl";
while(*s)
{
m[j] = toupper(s[i]);
cout << m[j] << endl;
printf("%c\n", m[j]);
}
 }
