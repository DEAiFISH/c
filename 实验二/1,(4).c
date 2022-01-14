#include<stdio.h>
void change();
int main()
{
    int x = 1;

    switch(x)
    {
        case 1:printf("b");
        case 2:printf("c");
        default:printf("a");
    }

    printf("\n");
    change();

    return 0;
}

void change()
{
   int x = 1;

    switch(x)
    {
        case 1:printf("b");break;
        case 2:printf("c");break;
        default:printf("a");
    }
}