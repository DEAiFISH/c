#include<stdio.h>
int main()
{
    float Amount;
    char ch;

    printf("输入消费金额：\n");
    scanf("%f",&Amount);
    if(Amount < 0)
    {
        printf("输入错误！\n");
    }
    if(0 <= Amount && Amount < 200)
    {
    ch = 'a';
    }
    else if(200 <= Amount && Amount < 400)
    {
        ch = 'b';
    }
    else if(400 <= Amount && Amount < 600)
    {
        ch = 'c';    
    }
    else if(600 <= Amount && Amount < 1000)
    {
        ch = 'd';
    }
    else
    {
        ch = 'e';
    }
    switch(ch)
    {
        case 'a':printf("实际金额：%f",Amount);break;
        case 'b':printf("实际金额：%f",Amount * 0.95);break;
        case 'c':printf("实际金额：%f",Amount * 0.9);break;
        case 'd':printf("实际金额：%f",Amount * 0.85);break;
        case 'e':printf("实际金额：%f",Amount * 0.8);
    }

    return 0;

}