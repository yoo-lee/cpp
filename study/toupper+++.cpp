#include <ctype.h>
#include <stdio.h>
#include <iostream>

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
