#include<stdio.h>
int main()
{
    int Score[5][3] = {{90,87,92}
                    ,{76,83,70}
                    ,{85,80,88}
                    ,{95,100,89}
                    ,{88,95,90}
                    };
    int i,j;
    int s[9] = {0};

    printf("姓名    语文    数学    英语    总分\n");
    for(i = 0;i < 5;i++)
    {
        printf("同学%d    ",i + 1);
        for(j = 0;j < 3;j++)
        {
            s[i] += Score[i][j]; 
            printf("%d      ",Score[i][j]);  
        }
        printf("%d    \n",s[i]);
    }
    printf("总分    ");
    for(j = 0;j < 3;j++)
    {
        for(i = 0;i < 5;i++)
        {
            s[j + 5] += Score[i][j];
        }
        printf("%d     ",s[j + 5]);
    }
    return 0;
}