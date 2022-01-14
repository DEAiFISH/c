#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int fun(int a,int min);
int main()
{
	int i,min = 100;
	int a[4];
	srand((unsigned int)time(NULL));
	for(i = 0;i < 4;i++)
	{
		printf("%d ",a[i] = rand() % 100 + 1);
		min = fun(a[i],min);
	}
	printf("\n%d",min);
	
	return 0;
}
int fun(int a,int min)
{
	if(min > a)
	{
		return a;
	}
	return min;
}
