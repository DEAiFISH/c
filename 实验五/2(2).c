#include<stdio.h>
int fun(int);

int main()
{
	int x;
	x = 12;
	printf("%d",fun(x));
	return 0;
}
int fun(int n)
{
    if(n == 1 || n == 2)
	{
        return 1;
    }        
    return (fun(n-1)+fun(n-2));
}