#include<stdio.h>
int main()
{
    int x;

    scanf("%d",&x);
    if(x % 2 == 0)
    {
        printf("even number\n");
    }
    else
    {
        printf("singular\n");
    }

    return 0;
}