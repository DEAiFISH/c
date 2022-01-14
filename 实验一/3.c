#include<stdio.h>
int main()
{
   float r,p = 3.14,c,area;

   printf("intput r:\n");
   scanf("%f",&r);

   c = 2 * p * r;
   area = p * r * r;

   printf("c=%-7.2f,area=%-7.2f\n",c,area);
}