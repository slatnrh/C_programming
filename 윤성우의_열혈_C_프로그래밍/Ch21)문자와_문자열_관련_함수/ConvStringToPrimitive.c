#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20];
    printf("정수 입력: ");
    scanf("%s", str);           // int atoi(const char *str);
    printf("%d\n", atoi(str));  // 문자열의 내용을 int형으로 변환
     

    printf("실수 입력: ");
    scanf("%s", str);           // long atol(const char *str);
    printf("%g\n", atof(str));  // 문자열의 내용을 long형으로 변환

    printf("실수 입력: ");
    scanf("%s", str);           // double atof(const char *str);
    printf("%f\n", atof(str));    // 문자열의 내용을 double형으로 변환

    return 0;
}