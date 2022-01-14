#include<stdio.h>
int main()
{
	int x,y,z,n = 0;
	for(x = 0;x <= 5;x++)
	{
		for(y = 0;y <= 10;y++)
		{
			if(x * 10 + y * 5 > 50)
			{
				break;
			}
			for(z = 0;z <= 50;z++)
			{
				if(x * 10 + y * 5 + z > 50)
				{
					break;
				}
				if(x * 10 + y * 5 + z == 50)
				{
					printf("%d个一元，%d个5角，%d个1角\n",x,y,z);
					n++;
				}
			}
		}
	}
	printf("共%d种方法\n",n);
	
	return 0;
}
