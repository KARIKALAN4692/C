#include<stdio.h>
main ()
{
	int n,num;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num & (num-1);
	if(n==0)
		printf("number is power of 2\n");
	else
		printf("number is not power of 2\n");
}
