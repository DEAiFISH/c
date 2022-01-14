#include<stdio.h>
int main()
{
    int a[3][3] = {{1,2,4},{6,1,5},{8,0,0}},b[3] = {0};
    int i,j;

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            b[i] += a[i][j];
        }
    }

    for(i = 0;i < 3;i++)
    {
        printf("%6d",b[i]);
    }

    return 0;
}