#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){
    struct point pos = {10, 20};
    struct person man = {"이승기", "010-1212-0001", 21};        // 초기화 과정에서는 문자열 저장을 위해서 strcpy 함수를 호출하지 않아도 된다
    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}