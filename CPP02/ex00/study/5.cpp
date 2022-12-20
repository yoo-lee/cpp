#include <iostream>
using namespace std;

class Kitty
{
public:
	Kitty() { cout << "Kitty on your lap\n"; }
    Kitty(const Kitty &obj)
     { cout << "Di Gi Gharat\n"; }
	 Kitty(const Kitty &obj)
     { cout << "Di Gi Gharat\n"; }
	 Kitty& operator = (const Kitty& x);
};

Kitty getKitty(Kitty obj)
 {
	return obj;
}

int main() {
	Kitty obj2;
	Kitty obj = obj2;
	Kitty obj4 ;
	Kitty obj3 (obj4);
	// Kitty obj2;
	// obj = obj2;
    // obj = getKitty(obj);
	return 0;
}
// コピーコンストラクタは、関数にオブジェクトを値渡しする時
// 関数から呼び出しもとにオブジェクトを値渡しする時にも呼び出されます
