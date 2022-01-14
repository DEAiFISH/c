#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int *p;
	for(p = a;p < a + N;p++)
	{
		scanf("%d",p);
	}
	for(p = a + N - 1;p > a - 1;p--)
	{
		printf("%d ",*p);
	}
	return 0;
}