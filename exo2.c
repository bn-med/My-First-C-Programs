#include <stdio.h>
int i, j, x, y;
int main()
{
    x = 6;
    y = 6;
    i = ++x;
    j = y++;
    printf("i=%d\n", i);
    printf("j=%d\n", j);

    return 0;
}