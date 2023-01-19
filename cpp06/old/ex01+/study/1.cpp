#include <stdio.h>

void func(void);

int main() {
        void (*p)() = func;
        po();
        return 0;
}

void func() {
        printf("Kitty on your lap");
}