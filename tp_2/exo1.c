#include<stdio.h>
float c;
int i;
int main(){
    for(i=0;i<=300;i+=10)
    {
        c=5.0/9.0*(i-32);
        printf("%d Fahrenheit = %.2f Celsius\n", i, c);

    }
    return 0;
}
