#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> scores;
	map<string, int> m
	m.insert(pair<string, int>("yoo", 80));
    scores.insert(pair<string, int>("Alice", 100));  // 1つ目の要素を追加
    scores.insert(pair<string, int>("Bob", 80));    // 2つ目の要素を追加
    scores.insert(make_pair("Charlie", 120));       // 3つ目の要素を追加
    scores["Dave"] = 90;                            // 4つ目の要素を追加

    for (auto x : scores) {
        cout << x.first << " : " << x.second << endl;
    }
    for (auto m : )
    return 0;
}
