#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /**** case 1 ****/
    strcpy(str2, str1);         // char *strcpy(char *dest, const char *src);
    puts(str2);                 // str1에 저장된 문자열을 str2에 복사

    /**** case 2 ****/
    strncpy(str3, str1, sizeof(str3));          // char *strcpy(char *dest, const char *src);
    puts(str3);                                 // str1에 저장된 문자열을 str3에 복사, str1의 길이가 더 길다면 sizeof(str3)가 반환한 값에 해당하는 수 만큼만 복사

    /**** case 3 ****/
    strncpy(str3, str1, sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = 0;
    puts(str3);

    return 0;
}