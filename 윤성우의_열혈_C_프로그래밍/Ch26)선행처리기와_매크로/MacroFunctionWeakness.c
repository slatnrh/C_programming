#include <stdio.h>
#define DIFF_ABS(X, Y) ((x)>(y) ? (x)-(y) : (y)-(x))        // X, Y로 선언되었지만 몸체는 x, y

int main(){
    printf("두 값의 차: %d \n", DIFF_ABS(5, 7));
    printf("두 값의 차: %g \n", DIFF_ABS(1.8, -1.4));

    return 0;
}