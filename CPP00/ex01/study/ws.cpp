#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;                  // 格納用の文字列型変数
    getline(cin, str);           // 行単位入力
    cout << str << endl;         // 出力
    return 0;
}
