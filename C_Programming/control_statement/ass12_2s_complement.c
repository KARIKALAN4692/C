#include<stdio.h>
main ()
{
	int num,x,i;
	printf("enter the number\n");
	scanf("%d",&num);
	x=~num+1;
	printf("print 2's complement number:\n");
	for(i=31;i>=0;i--)
		printf("%d",x>>i&1);
	printf("\n");


}
