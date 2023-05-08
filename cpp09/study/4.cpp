#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    map <string, int> score;  // map のデータ構造を用意する。
    string names[] = { "Tom","Bob","Mike" };
    score[names[0]] = 100;          //  キーと値の関連付け① Tom : 100
    score[names[1]] = 80;           //  キーと値の関連付け② Bob : 80
    score[names[2]] = 120;          //  キーと値の関連付け③ Mike : 120
    int i;
    auto it = score.begin();  // map のデータ構造を用意する。
	cout << it->first << endl;
	cout << it->second << endl;
	cout << it->third << endl;
    for(i = 0; i < 3; i++){
            cout << names[i] << ":" << score[names[i]]  << endl;
    }
    return 0;
}