#include <iostream>
using namespace std;

class samp{

    int i, j;

  public:

    samp(){    // デフォルトコンストラクタ
       cout << "default constructor\n";
    }

    samp(int a, int b){    // 引数つきコンストラクタ
       i = a;
       j = b;
       cout << "constructor with arguments\n";
    }

    ~samp(){ cout << "destructor\n";}  // デストラクタ

    void set_ij(int a, int b){ i=a; j=b;}
    int get_product(){ return i*j; }

};

int main(){

  samp *p1;
  samp *p2;
  samp *p3;

  p1 = new samp;      // オブジェクト１個   (引数なし)
  p2 = new samp(6,5); // オブジェクト１個   (引数あり)
  p3 = new samp[10];  // オブジェクト１０個の配列 (引数なし)

  p1->set_ij(4,5);

  for(int i=0 ; i<10 ; i++){
    p3[i].set_ij(i,i);
  }

  cout << "p1 の積は: " << p1->get_product() << "\n";
  cout << "p2 の積は: " << p2->get_product() << "\n";
  for(int i=0 ; i<10 ; i++)
    cout << "p3[" << i << "]の積は: " << p3[i].get_product() << "\n";

  delete p1;
  delete p2;
  delete[] p3;

  return 0;
}
