#include<stdio.h>
int main()
{
    char ch[2][5] = {"6937","8254"};
    int i,j,s = 0;

    for(i = 0;i < 2;i++)
    {
        for(j = 0;ch[i][j] > '0' && ch[i][j] <= '9';j += 2)
        {
            s = 10 * s + ch[i][j] - '0';
        }
    }

    printf("%d\n",s);

    return 0;
}