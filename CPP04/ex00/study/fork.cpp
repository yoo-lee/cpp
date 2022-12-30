#include <iostream>
//#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main()
{
  
    // fork()で子プロセスを生成（親と全く同じ動作）
    fork();
  
    cout << "Hello world Rainbow !\n" << endl;
    return 0;
}