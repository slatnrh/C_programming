#include <stdio.h>

int main(){
    char str[100];
    FILE * fp = fopen("mystory.txt", "rt");
    
    while(fgets(str, sizeof(str), fp) != NULL){
        printf(str);
    }
    fclose(fp);

    return 0;
}