#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
 int main ()
 {
int i , j;
int m[] = {1, 2 ,3};
char *p = NULL;
i = 0;
j =0;
const char *s = "dfnakl";
cout << "1" << endl;
while(s[i])
{
m[j] = toupper(s[i]);
 p = itoa(m[j])
cout << itoa(m[j]) << endl;
i++;
}
 }