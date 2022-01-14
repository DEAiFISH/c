#include<stdio.h>
void fun(int *,int *);
int main()
{
	int a=3,b=6;
	fun(&a,&b);
	printf("%d,%d",a,b);
	return 0;
}
void fun(int *a,int *b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
}