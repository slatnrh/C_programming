#include <stdio.h>
#include <stdlib.h>

void RemoveBSN(char str[]){
    int len = strlen(str);      // size_t strlen(const char *s);
    str[len - 1] = 0;           // 전달된 문자열의 길이 반환, 널 문자는 길이에 포함 X
}

int main(){
    char str[100];
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    printf("길이: %d, 내용: %s\n", strlen(str), str);

    RemoveBSN(str);
    printf("길이: %d, 내용: %s\n", strlen(str), str);


    return 0;
}