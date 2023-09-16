#include <stdio.h>
#define SUM(A, B, C) ((A)+(B)+(C))
#define MUL(A, B, C) ((A)*(B)*(C))

int main(){
    int num1, num2, num3;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("세 정수 덧셈 결과: %d \n", SUM(num1, num2, num3));
    printf("세 정수 곱셈 결과: %d \n", MUL(num1, num2, num3));

    return 0;
}