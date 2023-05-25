#include <ctype.h>
#include <stdio.h>
#include <iostream>
<<<<<<< HEAD
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
=======

<<<<<<< HEAD
using namespace std;

 int main (int ac, char **av)
=======
using  namespace::std;
 int main (int ac , char **av)
>>>>>>> 8fa2a3a3b040e4a9d3edfa390fce6eeffb7710bb
 {
int i , j;
int m[] = {1, 2 ,3};
i = 0;
j =0;
<<<<<<< HEAD
	while(ac < i)
	{
	const char *s = "dfnakl";
	m[j] = toupper(s[i]);
	cout << m[j] << endl;
	i++;
	j++;
	}
}
=======
 const char *s = "dfnakl";
std::string str;
std::string str2;
str2 = toupper(av[i]);
std::cout << str2 <<std:: endl;
printf("%c\n", m[j]);
 }
>>>>>>> 8fa2a3a3b040e4a9d3edfa390fce6eeffb7710bb
>>>>>>> 68bfa1a2eee9b76f15d776767dcc37ecb5f731c9
