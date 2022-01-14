#include<stdio.h>
int main()
{
	int k = 0,m = 0,i,j;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			k++;
		}
		k -= j;
	}
	m = i + j;
	printf("k=%d,m=%d\n",k,m);
	return 0;
}
