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
					printf("%d��һԪ��%d��5�ǣ�%d��1��\n",x,y,z);
					n++;
				}
			}
		}
	}
	printf("��%d�ַ���\n",n);
	
	return 0;
}
