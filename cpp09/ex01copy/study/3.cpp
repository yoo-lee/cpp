#include <iostream>
#include <stack>

using namespace std;
int main() {
    std::stack<int> stack;

    stack.push(15);  // スタックに要素を追加
    stack.push(1);  // スタックに要素を追加

    stack.pop();  // スタックのトップから要素を削除
	while(!stack.empty())
	{

	cout << stack.top() << endl;
	stack.pop();
	}
    return 0;
}
