#include <stdio.h>

int main(){
    FILE * fp = fopen("data.txt", "wt");
    if(fp == NULL){
        puts("파일오픈 실패!");
        return -1;      // 비정상적 종료를 의미하기 위해서 -1을 반환
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);         // 스트림의 종료

    return 0;
}