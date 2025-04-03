#include<stdio.h>
int fun(int);
main ()
{
static int sum;
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	sum=fun(num);
	printf("sum of the digit:=%d\n",sum);

}
int fun(int num)
{
static int sum;
	if(num>0)
	{
		sum=sum+num%10;
		num=num/10;
		fun(num);

	}
	else
		return sum;

}
