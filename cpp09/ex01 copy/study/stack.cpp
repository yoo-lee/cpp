#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;

// stack.push(15);は、整数値15をスタックに追加する操作です
    // 要素の追加
    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.push(-10);

    // スタックのトップ要素の取得と削除
    int topElement = stack.top();
    stack.pop();
	// stack.pop();を呼び出すと、スタックのトップにある要素が削除されます。
	// int backE = stack.back();
	// stack.pop();

    // スタックの要素数の取得
    int size = stack.size();

    // スタックが空かどうかのチェック
    bool isEmpty = stack.empty();

	bool isEmpty = stack.empty();
	int stack.size();

	// std::cout << "stack contents ";
	// while (!stack.empty())
	// {
	// 	std::cout << stack.top() << " ";
	// 	stack.pop();
	// }
    // スタックの中身を表示
    std::cout << "Stack contents: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;

    return 0;
}
