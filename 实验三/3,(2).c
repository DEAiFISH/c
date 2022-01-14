#include<stdio.h>
int main()
{
	int i,h = 1;
	double e,n = 1;
	for(i = 1;n > 1e-5;i++)
	{
		h = h * i;
		n = 1.0 / h;
		e = e + n;
	 } 
	 printf("%.5f",e);
	 
	 return 0;
}
