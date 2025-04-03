#include<stdio.h>
int fun(int);
int sum=0,k,n1=1,dnd;
main ()
{
        int k,n1,dnd;
	printf("enter the number\n");
	scanf("%d",&dnd);
	k=fun(n1);
	printf("sum of proper divisor:=%d\n",k);
}
int fun(int n1)
{
	static int s;
	if(n1<dnd)
	{
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
