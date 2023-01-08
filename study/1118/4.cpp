#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
 
int main(int argc, char** args){
    int i;
    char *p;
    for (i = 0; i < 10000000;i++){
        //  メモリを生成（開放しない）
        p = (char*)malloc(sizeof(char) * 10000);
    }
	system("leaks ./a.out");
	
    return 0;
}