#include<stdio.h>
int main()
{
    int i,j,row = 0,col = 0,max;
    int a[3][4] = {{5,2,0,9},{3,7,12,6},{10,4,1,8}};
    max = a[0][0];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("max = %d\n",max);
    printf("max = a[%d][%d]\n",row,col);

    return 0;
}