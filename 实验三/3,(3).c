# include<stdio.h>
# define k 5
int main()
{
	int i,j;
	for(i = 1;i <= k;i++)
	{
		for(j = 1;j <= k;j++)
		{
			if(i == j || i + j == k + 1)
			{
				printf("  ");
			}
			else if(i < j && i + j > k + 1)
			{
				printf("��");
			}
			else if(i < j && i + j < k + 1)
			{
				printf("��");
			}
			else if(i > j && i + j > k + 1)
			{
				printf("��");
			}
			else
			{
				printf("��");
			}
		}
		printf("\n");
	}
	return 0;
} 

