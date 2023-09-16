#include <stdio.h>
#include <stdlib.h>

int main(){
    int arrlen = 5;     // 초기 배열 길이
    int idx = 0;        // 배열 인덱스
    int * arr = (int *)malloc(sizeof(int) * arrlen);

    while(1){
        printf("정수 입력: ");
        scanf("%d", &arr[idx]);
        if(arr[idx] == -1){     // 입력의 종료를 검사
            break;
        }

        if(arrlen == idx + 1){      // 배열의 확장 필요성 검사
            arrlen += 3;
            arr = (int *)realloc(arr, sizeof(int) * arrlen);
        }
        idx++;
    }

    for(int i = 0; i < idx; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    
    return 0;
}