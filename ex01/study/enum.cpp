#include <stdio.h>
 
// enum型の定義
enum week {
  Mon = 5,
  Tue,
  Wed = 8,
  Thu,
  Fri,
  Sat,
  Sun
};
 
int main(void) {
    // enum型の宣言
    enum week wk0, wk1, wk2, wk3;
    
    // enum型のメンバを代入
    wk0 = Mon;
    wk1 = Tue;
    wk2 = Wed;
    wk3 = Thu;
    printf("Monの値は: %d\n", wk0);
    printf("Tueの値は: %d\n", wk1);
    printf("Wedの値は: %d\n", wk2);
    printf("Thuの値は: %d\n", wk3);
    
    return 0;
}