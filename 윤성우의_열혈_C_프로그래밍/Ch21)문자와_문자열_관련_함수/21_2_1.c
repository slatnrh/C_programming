#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20];
    printf("문자열 입력: ");
    scanf("%s", str);

    int sum = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 48 && str[i] <= 57){
            sum += (int)str[i] - '0';
        }
    }

    printf("%d\n", sum);
    
    return 0;
}