#include <iostream>
#include <stack>

using namespace std;
int main() {
    std::stack<int> stack;

    stack.push(15);  // スタックに要素を追加

    // stack.pop();  // スタックのトップから要素を削除
	cout << stack.top() << endl;
    return 0;
}
