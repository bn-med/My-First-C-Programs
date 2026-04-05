#include<stdio.h>
int a;
int main(void){
    printf("how much money do you have? ");
    scanf("%d",&a);
    if (a<1000)
    {
        printf("your are pooooooor! \n");
    }
    else if(a>1000 && a<10000)
    {
        printf("it's okey it's okey\n ");
    }
    else if(a>1000000)
    {
        printf("you are a fucking millionair!!!!!\n" );
    }
    
return 0;
}
