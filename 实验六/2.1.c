#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int max,*p;
	for(p = a;p < a + N;p++)
	{
		scanf("%d",p);
	}
	p = a;
	max = *p;
	for(p = a + 1;p < a + N;p++)
	{
		if(max < *p)
		{
			max = *p;
		}
	}
	printf("%d",max);
	return 0;
}