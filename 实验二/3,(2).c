#include<stdio.h>
int main()
{
    int x,y,z;
    int max,min;

    printf("input three diferent intengers:");
    scanf("%d%d%d",&x,&y,&z);
    max = x >= y ? (x >= z ? x : z) : (y >= z ? y : z);
    min = x <= y ? (x <= z ? x : z) : (y <= z ? y : z);
    printf("sum is %d\n",x + y + z);
    printf("average is %d\n",(x + y + z) / 3);
    printf("product is %d\n",x * y *z);
    printf("smallest is %d\n",min);
    printf("lagest is %d\n",max);

    return 0;
}