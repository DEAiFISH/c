#include<stdio.h>
typedef struct
{
	int number;
	int score;	
}Class;
int main()
{
	int N,M,i,j,l,t;
	
	scanf("%d%d",&N,&M);
	Class c1[N],c2[M],c3[N + M];
	
	for(i = 0;i < N;i++)
	{
		scanf("%d%d",&c1[i].number,&c1[i].score);
		c3[i].number = c1[i].number;
		c3[i].score = c1[i].score;
	}
	for(i = 0,j = N;i < M;i++,j++)
	{
		scanf("%d%d",&c2[i].number,&c2[i].score);
		c3[j].number = c2[i].number;
		c3[j].score = c2[i].score;
	}
	
	for(i = 0;i < N + M - 1;i++)
	{
		l = i;
		for (j= i + 1;j < N + M;j++)
		{
			if(c3[l].number > c3[j].number)
            {
                l = j;
            }
		}
		t = c3[l].number;
        c3[l].number = c3[i].number;
        c3[i].number = t;
        t = c3[l].score;
        c3[l].score = c3[i].score;
        c3[i].score = t;
	}

	for(i = 0;i < N + M;i++)
	{
		printf("%d %d\n",c3[i].number,c3[i].score);
	}
	return 0;
}