#include<stdio.h>
int main()
{
	int i,j;
	for(i = 1;i <= 100;i++)
	{
		if(i % 3 != 0 || i % 7 != 0)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
