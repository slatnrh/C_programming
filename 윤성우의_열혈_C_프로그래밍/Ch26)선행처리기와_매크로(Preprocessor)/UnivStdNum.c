#include <stdio.h>
//  #define STNUM(Y, S, P)  YSP
//  #define STNUM(Y, S, P)  Y S P
#define STNUM(Y, S, P)  (Y)*100000 + (S)*1000 + (P)

int main(){
    printf("학번: %d \n", STNUM(10, 65, 175));
    printf("학번: %d \n", STNUM(10, 65, 75));

    return 0;
}