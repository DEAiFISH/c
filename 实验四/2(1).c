#include<stdio.h>
int main()
{
    int fib[15],i,s = 0;
    fib[0] = 1;
    fib[1] = 1;

    for(i = 2;i < 15;i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    for(i = 0;i < 15;i++)
    {
        if(fib[i] % 2 == 1)
        {
            s += fib[i];
        }
    }

    printf("%d\n",s);

    return 0;
}