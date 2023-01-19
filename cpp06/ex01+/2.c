#include <stdio.h>
// #include <cstdio>


void kitty(void);
void sakura(void);
void hina(void);

int main() {
	void (*p[])() = { kitty , sakura , hina };
	int i;

	printf("実行する関数の番号を指定してください 0～2>");
	scanf("%d" , &i);
	if ((i < 0) | (i > 2)) return 0;
	(*p[i])();
	return 0;
}

void kitty() {
	printf("Kitty on your lap\n");
}

void sakura() {
	printf("Card Captor SAKURA");
}

void hina() {
	printf("LOVE HINA");
}