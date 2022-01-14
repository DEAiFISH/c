#include<stdio.h>
int main()
{
	int x,y;
	for(y = 1,x = 1;y <= 50;y++)
	{
		if(x >= 10)
		{
			break;
		}
		if(x % 2 ==1)
		{
			x += 5;
			continue;
		}
		x -= 3;
	}
	
	printf("x=%d,y=%d\n",x,y);
	
	return 0; 
 } 
