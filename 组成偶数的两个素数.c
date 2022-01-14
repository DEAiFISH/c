#include<stdio.h>
#include<math.h>
int prim(int num);
int main()
{
	int num,i;
	scanf("%d",&num);
	for(i = 3;i < num;i++)
	{
		if(prim(i) && prim(num - i))
		{
			printf("%d + %d = %d",i,num - i,num);
			break;
		}
	} 
	
	return 0;
}

int prim(int num)
{
	int i;
	int m = sqrt(num);
	for(i = 2;i <= m;i++)
	{
		if(num % i == 0)
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