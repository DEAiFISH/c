#include  <stdio.h>
int fun(int x)
{ 
    static int a = 3;
    a = a + x;
    return a;
}
int main()
{ 
    int k = 2,m = 1,n;
    n = fun(k);
    n = fun(m);
    printf("%d\n",n);
    return 0;
}