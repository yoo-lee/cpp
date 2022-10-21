#include <stdio.h>

int main (int a, char **b)
{
	int i,j;
	i = 0;
	j = 0;

	// printf("%s",*b);
	if (a == 2)
	{
	while (b[i])
	{
		printf("%c\n",b[1][i]);
		i++;
	}
	}
}

// 何故出力がfdしか出てこないのか？
