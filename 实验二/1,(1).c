#include<stdio.h>
int main()
{
    int a,b,x = 10,y = 9;

    a = ( --x == y++ ) ? --x : ++y;
    b = y;

    printf("%d,%d\n",a,b);

    return 0;
}