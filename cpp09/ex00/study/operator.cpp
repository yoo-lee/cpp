#include <iostream>

class MyClass {
public:
    int* data;
	char* s;
    // コンストラクタ
    MyClass(int val) {
        data = new int(val);
    }

    // デストラクタ
    ~MyClass() {
        delete data;
    }

    // 代入演算子の定義
    
	MyClass& operator=(const MyClass& a) {
        if (this != &a) { // 自己代入をチェック
            delete data; // 既存のデータを解放

            // 新しいデータを確保してコピー
            s = new char(*a.data);
        }
        return *this;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);

    obj2 = obj3;
    obj1 = obj2;

    std::cout << "obj1 value: " << *(obj1.data) << std::endl;
    std::cout << "obj2 value: " << *(obj2.data) << std::endl;
    std::cout << "obj3 value: " << *(obj3.data) << std::endl;

    return 0;
}
// 代入演算子は右辺の値を左辺に代入する操作を行い、その結果を左辺のオブジェクト自体への参照として返します。これにより、連続した代入演算子をチェーンすることができます。ただし、値が空になるわけではありません