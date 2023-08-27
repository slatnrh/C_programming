#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[20];
    char str2[20];

    printf("문자열 입력 1: ");
    scanf("%s", str1);

    printf("문자열 입력 2: ");
    scanf("%s", str2);

    if(!strcmp(str1, str2)){                            // int strcmp(const char *s1, const char *s2);
        puts("두 문자열은 완벽히 동일합니다.");         // 두 문자열의 내용이 같으면 0, s1이 더 크면 양수, s2가 더 크면 음수 값 반환
    }
    else{
        puts("두 문자열은 완벽히 동일하지 않습니다.");

        if(!strncmp(str1, str2, 3)){                    // int strncmp(const char *s1, const char *s2, size_t n);
            puts("그러나 앞 세 글자는 동일합니다.");    // 두 문자열의 길이 n까지의 내용이 같으면 0, s1이 더 크면 양수, s2가 더 크면 음수 값 반환
        }
    }

    return 0;
}