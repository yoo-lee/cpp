
#include <iostream>
#include <string>

int main() {
  std::string expression = "Hello";

  for (std::string c : expression) {
    std::cout << c << "+" << '-';
  }

  return 0;
}

// for ( : ) ループは、反復対象の要素を順番に取り出し、指定した変数に格納します。
// その後、ループの本体で指定した処理が実行されます。ループは反復対象の要素をすべて処理するまで続きます。