#include<stdio.h>
int fun(int fact,int num);
main ()
{
	int num,fact=1;
	int k;
	printf("enter the number:\n");
	scanf("%d",&num);
	num++;
	k=fun(fact,num);
	printf("factorial=:%d\n",k);
}
int fun(int fact,int num)
{
	if(num==1)
	{
		return fact;
	}
	else
		fun((fact*num),--num);
}
