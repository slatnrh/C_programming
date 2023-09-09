#include <stdio.h>

struct employee
{
    char name[20];
    char pid[20];
    int money;
};

int main(){
    struct employee person[3];

    for(int i = 0; i < 3; i++){
        printf("이름 입력: "); scanf("%s", person[i].name);
        printf("주민등록번호 입력: "); scanf("%s", person[i].pid);
        printf("급여정보 입력: "); scanf("%d", &person[i].money);
    }

    for(int i = 0; i < 3; i++){
        printf("이름: %s\n", person[i].name);
        printf("주민등록번호: %s\n", person[i].pid);
        printf("급여정보: %d\n", person[i].money);
    }

    return 0;
}