#include <stdio.h>

struct employee
{
    char name[20];
    char pid[20];
    int money;
};

int main(){
    struct employee person;
    printf("이름 입력: "); scanf("%s", person.name);
    printf("주민등록번호 입력: "); scanf("%s", person.pid);
    printf("급여정보 입력: "); scanf("%d", &person.money);

    printf("이름: %s\n", person.name);
    printf("주민등록번호: %s\n", person.pid);
    printf("급여정보: %d\n", person.money);
    
    return 0;
}