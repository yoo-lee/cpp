#include <cstdio>

int main() {
    char str[] = "Yoo-Lee";
    char name[20];
    char lastName[20];
    int age;

    // 文字列からの値の抽出
    int result = sscanf(str, "%s %s %d", name, lastName, &age);
	// 入力が文字列からの入力に制限されている。
	int res = sscanf(str, "%s %s %d", name ,lastName, &Age);
    if (result == 3) {
        printf("Name: %s\n", name);
        printf("Last Name: %s\n", lastName);
        printf("Age: %d\n", age);
    } else {
        printf("Failed to parse the string.\n");
    }
    return 0;
}
