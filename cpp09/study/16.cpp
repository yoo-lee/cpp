#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> scores;
    scores.insert(make_pair("Charlie", 120));       // 3つ目の要素を追加
    scores.insert(make_pair("yoo", 100));       // 3つ目の要素を追加
    scores["Dave"] = 90;                       // 4つ目の要素を追加
	scores["chimpo"] = 100;
	
    for (auto x : scores) {
        cout << x.first << " : " << x.second << endl;
    }
    
    return 0;
}
