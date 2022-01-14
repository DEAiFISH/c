#include<stdio.h>
int main()
{
   int b1,b2,b3,b4,b5;
   long x;
   
   scanf("%ld",&x);

   b5 = (x / 10000);
   b4 = (x / 1000) % 10;
   b3 = ((x - b5 * 10000 - b4 * 1000) / 100) % 100;
   b2 = (x / 10) % 10;
   b1 = x - (b5 * 10000 + b4 * 1000 + b3 * 100 + b2 * 10);

   printf("the number is %ld\n",x);
   printf("its bit is:%d,%d,%d,%d,%d",b5,b4,b3,b2,b1);

   return 0;

}