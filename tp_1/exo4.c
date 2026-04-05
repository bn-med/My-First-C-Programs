#include <stdio.h>
int a, b, c, d;
float aver;
int main()
{
    printf("give the first number:");
    scanf("%d", &a);
    printf("give the second number:");
    scanf("%d", &b);
    printf("give the third number:");
    scanf("%d", &c);
    printf("give the fourth number:");
    scanf("%d", &d);
    aver = (a + b + c + d) / 4;
    printf("the average of the four numers is :%.2f\n", aver);
    return 0;
}
