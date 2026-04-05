#include <stdio.h>
double X, Y, Z;
int main()
{
    printf("give X:");
    scanf("%lf", &X);
    printf("give Y:");
    scanf("%lf", &Y);

    Z = X;
    X = Y;
    Y = Z;
    printf("X=%.0lf\n" ,X);
    printf("Y=%.0lf\n" ,Y);

    return 0;
}