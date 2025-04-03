#include<stdio.h>
main ()
{
	int num;
	int n;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num&7;
	if(n==0)
		printf("number is divisible by 8\n");
	else
		printf("number is not divisible by 8\n");
}
