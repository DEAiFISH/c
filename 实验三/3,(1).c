#include<stdio.h>
int main()
{
	int i,n;
	long long int s = 0,num = 2;
	
	scanf("%d",&n);
	printf("s=");
	for(i = 1;i <= n;i++)
	{
			s += num;
			printf("%lld+",num);
			num = num * 10 + 2;
	} 
	
	printf("\b=%lld\n",s);
	
	return 0;
}
