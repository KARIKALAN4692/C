#include<stdio.h>
main ()
{
	int num,n;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num&1;
	if(n==0)
		printf("number is even\n");
	else
		printf("number is odd\n");
}
