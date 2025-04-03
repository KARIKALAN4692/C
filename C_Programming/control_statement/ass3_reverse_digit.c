#include<stdio.h>
main ()
{
	int a,rev=0,num;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
	printf("reverse digit:%d\n",rev);
}
