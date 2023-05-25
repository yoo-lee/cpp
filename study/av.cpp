<<<<<<< HEAD
#include<iostream>
using namespace std;

 int main (int ac, char **av)
{
    int i = 0;

    while(i < ac)
    {
    cout << *av++ << endl;
    cout << **av++ << endl;
    }
    return 0;
=======
#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main(int argc, char* argv[])
{
    // argsは引数の数。argvは実際の値
    // argv[0]にはプログラム自身の名前が必ず入るので、最小数は１
    if (argc != 3)
    {
        cout << "Error! This program needs [FilePath]_[Num].";
            return 0;
    }
 
    // 第一引数であるファイルパスからファイルオブジェクトを作る
    ifstream ifs(argv[1]);
 
    // 開かなかったらエラー
    if (!ifs)
    {
        cout << "Error! File can not be opened" << endl;
        return 0;
    }
 
    string str = "";
 
    // ファイルの中身を読み取って表示
    while (getline(ifs, str))
    {
        cout << "ファイルの中身:" << str << endl;
    }
 
    // 第二引数は数字だがchar型であるのでintに変換
    int iNum = atoi(argv[2]);
    cout << "第二引数：" << iNum << endl;
 
    return 0;
>>>>>>> 68bfa1a2eee9b76f15d776767dcc37ecb5f731c9
}