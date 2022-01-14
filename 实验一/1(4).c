#include<stdio.h>
int main()
{
  { 
   int i = 8,j = 10,m,n;

   m = ++i,n = j++;

   printf("%d,%d,%d,%d\n",i,j,m,n);
  }

   printf("\n");
   printf("改写后：\n");
   printf("\n");

  { 
   int i = 8,j = 10,m,n;

   m = i++,n = ++j;

   printf("%d,%d,%d,%d",i,j,m,n);
  }
  
   return 0;
}