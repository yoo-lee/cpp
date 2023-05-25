#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    map <string, int> score;  // map のデータ構造を用意する。
    map <int, int> score2;  // map のデータ構造を用意する。
    string names[] = { "Tom","Bob","Mike", "yoo" };
    int names[] = { 1, 2, 3, 4 };
    score[names[0]] = 100;          //  キーと値の関連付け① Tom : 100
    score[names[1]] = 80;           //  キーと値の関連付け② Bob : 80
    score[names[2]] = 120;          //  キーと値の関連付け③ Mike : 120
    score[names[3]] = 120;          //  キーと値の関連付け③ Mike : 120
    score2[names[3]] = 120;          //  キーと値の関連付け③ Mike : 120
    int i;
    
void printMap(const std::map<std::string, double>& map) {
    std::map<std::string, double>::const_iterator it;
    for (it = map.begin(); it != map.end(); ++it) {
        std::cout << it->first << "=" << it->second << " ";
    }
    std::cout << std::endl;
}
    return 0;
}