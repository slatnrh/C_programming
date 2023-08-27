#include <stdio.h>
#include <stdlib.h>

void RemoveBSN(char str[]){
    int len = strlen(str);      // size_t strlen(const char *s);
    str[len - 1] = 0;           // 전달된 문자열의 길이 반환, 널 문자는 길이에 포함 X
}

int main(){
    char str1[20];
    char str2[20];
    char str3[40];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    RemoveBSN(str1);
    RemoveBSN(str2);

    strcat(str3, str1);
    strcat(str3, str2);

    fputs(str3, stdout);

    return 0;
}