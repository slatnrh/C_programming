#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";

    /* case 1 */
    strcat(str1, str2);         // char *strcat(char *dest, const char * src);
    puts(str1);                 // str1에 저장된 문자열의 뒤에 str2에 저장된 문자열 복사 후 삽입

    /* case 2 */
    strncat(str3, str4, 7);     // char * strncat(char *dest, const char *src, size_t n);
    puts(str3);                 // str3에 저장된 문자열의 뒤에 str4에 저장된 문자열 n의 길이만큼 복사 후 삽입

    return 0;
}