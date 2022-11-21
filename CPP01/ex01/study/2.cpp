
#include <iostream>
using namespace std;

#define SIZE 255

int main(){

  int *p1;
  int *p2;
  char *p3;

  p1 = new int;         // (※) int 型変数１個のメモリ確保

  p2 = new int[SIZE];   // (※) int 型の配列 (要素数 SIZE) のメモリ確保

  p3 = new char[8];   // (※) int 型の配列 (要素数 SIZE) のメモリ確保

  *p1 = 1000;
  *p3 = "abcdefg";

  cout << "p1 が指している整数型は: " << *p1 << "\n";
  cout << "p1 が指している文字列は: " << *p3 << "\n";

  // p2 の利用部は各自で例を考えて書いてみること

  delete p1;    // (※) メモリの解放
  delete[] p2;  // (※) メモリの解放 (１要素と配列とで異なる！！)

  return 0;
}