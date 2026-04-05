#include<stdio.h>
#include<math.h>
int n,sec,min,hou;
int main(){
    printf("give n:");
    scanf("%d", &n);
    hou=n/3600;
    min=(n%3600)/60;
    sec=(n%3600)%60;
    printf("%d seconds =%d hours %d minuts %d seconds\n ", n,hou,min,sec);
    return 0;

}
