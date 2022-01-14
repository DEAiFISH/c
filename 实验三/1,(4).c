#include<stdio.h>
int main()
{
	int i,j,sum;
	for(i = 1;i < 6;i++)
	{
		sum = 0;
		for(j = 1;j <= 4;j++)
		{
			sum += j;
		}
	}
	printf("sum=%d\n",sum);
	return 0;
}
