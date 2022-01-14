#include<stdio.h>
int main()
{
    int a,b;

    printf("please input two numbers,a,b! \n ");
    scanf("%d%d",&a,&b);
    if(a > b) printf("%d is lager",a);
    else if(a == b) printf("These numbers are equal");
    else printf("%d is lager",b);

    return 0;
}