#include <stdio.h>
	
void sort(int a[])
{
	int i,j;
	i = 0;
	 
	while(i < 5)
	{
		int j = i+1;//i+1つまり隣の要素のインデックスを定義しておく
		while(j < 5)
		{
		if(a[j] <a[i])	
			{
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			}//ブロックの中はスワップ。
		j++;
		}
	i++;
	}
}

int main (void)
{
	int a[5] = {5,2,8,9,1};
	int i = 0;
	sort(a);
	
	while(i < 5)
	{
	printf("%d",a[i]);
	i++;
	}
	return 0;
}