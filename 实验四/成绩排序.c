#include<stdio.h>
#include<string.h>
int main()
{
    char ch[9][10] = {"曾一","宋鸿漾","黎权赋","黄性平","尹建国","王茜","赵禹","晁祥翔"};
    char k[10];
    int a[8] = {89,78,98,87,63,77,24,99};
    int i,j,l,t;

    for(i = 0;i < 8;i++)
    {
        l = i;
        for(j = i + 1;j < 8;j++)
        {
            if(a[j] > a[l])
            {
                l = j;
            }
        }
        t = a[i];
        a[i] = a[l];
        a[l] = t;
        strcpy(k,ch[i]);
        strcpy(ch[i],ch[l]);
        strcpy(ch[l],k);

        printf("%s      %d\n",ch[i],a[i]);
    }

    return 0;
}