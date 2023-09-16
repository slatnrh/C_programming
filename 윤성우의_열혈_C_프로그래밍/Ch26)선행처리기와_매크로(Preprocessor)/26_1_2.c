#include <stdio.h>
#define PI 3.1415
#define AREA(r) ((r)*(r)*(PI))

int main(){
    double radius;
    printf("반지름: ");
    scanf("%lf", &radius);

    printf("원의 넓이: %g \n", AREA(radius));

    return 0;
}