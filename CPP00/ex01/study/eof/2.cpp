
#include <iostream>
using namespace std;

int main() {
  char buf[1024];

  for (;;) {
    cout << "Input: ";
    cin.getline(buf, sizeof(buf));
    if (cin.eof()) break;
    cout << "Output: " << buf << endl;
  }

  return 0;
}