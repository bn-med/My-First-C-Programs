#include<stdio.h>
#include<math.h>
double R, area, circ;
double pi = M_PI;

int main(){
    printf("give the Radius of the circul:");
    scanf("%lf", &R);
    area=pi*R*R;
    circ=2*pi*R;
    printf(" the area is:%lf\n", area);
    printf("the circumference is:%lf\n", circ);
    return 0;


}