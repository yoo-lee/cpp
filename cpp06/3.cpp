int main() {
    char *p = malloc(42); // エラーになる
    // char *p = reinterpret_cast<char *>(malloc(42));
	char *p = reinterpret_cast<int *>(malloc(98))
}