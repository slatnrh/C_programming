#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point leftup;
    Point rightdown;
} Rectangle;

void ShowRecArea(Rectangle rec){
    printf("직사각형의 넓이: %d\n", (rec.rightdown.xpos - rec.leftup.xpos) * (rec.rightdown.ypos - rec.leftup.ypos));
}

void ShowRecPos(Rectangle rec){
    printf("좌 상단: [%d, %d]\n", rec.leftup.xpos, rec.leftup.ypos);
    printf("좌 하단: [%d, %d]\n", rec.leftup.xpos, rec.rightdown.ypos);
    printf("우 상단: [%d, %d]\n", rec.rightdown.xpos, rec.leftup.ypos);
    printf("우 하단: [%d, %d]\n", rec.rightdown.xpos, rec.rightdown.ypos);
}

int main(){
    Rectangle r1 = {{1, 1}, {4, 4}};
    Rectangle r2 = {{0, 0}, {7, 5}};
    ShowRecArea(r1);
    ShowRecPos(r1);
    ShowRecArea(r2);
    ShowRecPos(r2);

    return 0;
}