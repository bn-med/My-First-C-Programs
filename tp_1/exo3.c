#include<stdio.h>
float d,r;
int main(){
    printf("give the degree in 'c':");
    scanf("%f" , &d);
    r=d * 3.14159 / 180;
    printf("%0.f degrees=%f radian\n", d, r);
    return 0;
}
