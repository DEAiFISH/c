#include<stdio.h>
int f();
int x,y;
int main()
{
    scanf("%d%d",&x,&y);
    f();
    printf("%d %d",x,y);
    return 0;
}
int f()
{
    int t;
    t = x;
    x = y;
    y = t;

    return 0;
}