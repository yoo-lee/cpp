#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int main(void) {
  //# 子プロセスを起動
 
	 pid_t pid = fork();
  //# pid==0、つまり子プロセスの場合
  if(pid == 0) 
  {
    //# 子プロセスの親プロセスPIDと、自身のPIDを出力
    cout << "###[Child Process] (1)PPID: "<< getppid() <<" (2)PID: "<< getpid() << endl;
    //# 子プロセスの処理終了
    exit(EXIT_SUCCESS);
  }
  else if(pid > 0)
   {
    //# 親プロセスのPIDを出力
    cout << "###[Parent Process] (1)PID: "<< getpid() << endl;
    cout << "###[Parent Process] Wait for Child Process to finish. " << endl;
    //# 子プロセスの処理終了を待つ
    wait(NULL);
    cout << "###[Parent Process] Child process finished. " << endl;
  }
  else {
    cout << "###[Parent Process] Failed to create child process. " << endl;
  }
  return EXIT_SUCCESS;
}