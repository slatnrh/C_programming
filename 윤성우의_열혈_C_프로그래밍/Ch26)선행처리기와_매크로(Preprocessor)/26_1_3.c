#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main(){
    int num1, num2;
    printf("두 수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("더 큰수는: %d \n", MAX(num1, num2));

    return 0;
}