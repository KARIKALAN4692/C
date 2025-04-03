#include<stdio.h>
main ()
{
	int n,num;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num & 1<<31;
	if(n!=0)
		printf("number is negative\n");
	else
		printf("number is positive\n");
}
