#include<stdio.h>
int main()
{
   int a[50];
   int i;

   printf("输入50个整数:\n");

   for(i = 0;i < 50;i++)
   {
      a[i] = i;
   }

   for(i = 1;i <= 50;i++)
   {
      if(i % 10 == 0 && i < 49)
      {
         printf("%3d\n",a[i++ - 1]);
      }
      
      printf("%3d",a[i - 1]);
   }

   return 0;
}