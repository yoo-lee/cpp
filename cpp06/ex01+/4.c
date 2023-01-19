#include <stdio.h>



void newmadefunction1(void) {



printf("青い海です\n");



return;

}



void newmadefunction2(void) {



printf("金色の海です\n");



return;

}



void newmadefunction3(void) {



printf("水色の海です\n");



return;

}



int main(void) {



void(*ptf[3])(void);



ptf [0]= newmadefunction1;

ptf [1]= newmadefunction2;

ptf [2]= newmadefunction3;



(*ptf[0])();

(*ptf[1])();

(*ptf[2])();



return 0;



}