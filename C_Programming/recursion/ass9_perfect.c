#include<stdio.h>
int fun(int);
int sum=0,k,n1=1,dnd;
main ()
{
	printf("enter the number\n");
	scanf("%d",&dnd);
	k=fun(n1);
        if(k==dnd)
	printf("given number is perfect:=%d\n",k);
        else
        printf("given number is not perfect:\n");
}
int fun(int n1)
{
static int s;
	if(n1<dnd)
	{
		sum=(dnd%n1);
		if(sum==0)
		{
			printf("sum=%d\n",n1);
			s=s+n1;
		}
		fun(++n1);
	}
	else
		return s; 
}
