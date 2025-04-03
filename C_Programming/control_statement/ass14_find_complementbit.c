#include<stdio.h>
main ()
{
	int num,num1,bp,i,a,b,count=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("enter the complement bit position\n");
	scanf("%d",&bp);
	num1=num ^ 1<<bp;
	for(i=31;i>=0;i--)
		printf("%d",num1>>i&1);
	printf("\n");
	for(i=0;i<=31;i++)
	{
		a=num>>i&1;
		b=num1>>i&1;
		count++;
		if(a!=b)
			break;
	}
	printf("complement bit position:%d\n",count-1);
}
