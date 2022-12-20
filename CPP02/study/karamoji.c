#include<stdio.h>
int main() {
	char str1[] = "";
	char str2[] ="Hello";

	if (str1[0] == NULL) {
		printf("str1文字列は空です\n");
	}
	else {
		printf("str1文字列は空ではありません\n");
	}

	if (str2[0] == NULL) {
		printf("str2文字列は空です\n");
	}
	else {
		printf("str2文字列は空ではありません\n");
	}


	return 0;
}