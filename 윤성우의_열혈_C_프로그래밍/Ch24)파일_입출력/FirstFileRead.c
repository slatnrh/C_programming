#include <stdio.h>

int main(){
    int ch;
    FILE * fp = fopen("data.txt", "rt");
    if(fp == NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    for(int i = 0; i < 3; i++){
        ch = fgetc(fp);
        printf("%c\n", ch);
    }
    fclose(fp);

    return 0;
}