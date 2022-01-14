#include<stdio.h>
#include<math.h>
int ss(int x);
int main()
{
	int i,b1,b2,b3;
	for(i = 11;i < 1000;i++)
	{
		b1 = i % 10;
		b2 = (i / 10) % 10;
		b3 = (i / 100) % 10;
		if(i <= 99 && b1 == b2 && ss(i))
		{
			printf("%5d",i);
		}
		else if(i <= 999 && b1 == b3 && ss(i))
		{
			printf("%5d",i);
		}
	}
	return 0;
}
int ss(int x)
{
	int i,m = sqrt(x);
	for(i = 2;i <= m;i++)
	{
		if(x % i == 0)
		{
			break;
		}
	}
	if(i > m)
	{
		return 1;
	}
	return 0;
}
