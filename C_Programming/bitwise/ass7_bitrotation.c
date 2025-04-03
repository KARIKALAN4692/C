#include<stdio.h>
main ()
{
	int num,i,r,r1;
	unsigned int num1;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("rotate left side\n");
	scanf("%d",&r);
	num1=num>>r | num<<32-r;//value will be stored unsigned int variable//
	for(i=31;i>=0;i--)
		printf("%d",num1>>i&1);
	printf("\n");
	printf("rotate right side\n");
	scanf("%d",&r1);
	num=num1<<r1 | num1>>32-r1;
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
