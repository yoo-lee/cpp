#include <iostream>
#include <list>

int main()
{
    std::list<int> a = {1, 2, 3};
    std::list<int> LA;
    LA.push_back(*std::next(a.begin(), 1));  // 正しい範囲内のイテレータを使用して要素を取得

    for (int num : LA) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
