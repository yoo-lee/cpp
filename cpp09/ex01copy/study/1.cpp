#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> data;

public:
    void push(const T& element) {
        data.push_back(element);
    }
};

int main() {
    Stack<int> stack;
    stack.push(5);  // スタックに要素を追加
	
	cout << stack.first() << endl;
    return 0;
}
