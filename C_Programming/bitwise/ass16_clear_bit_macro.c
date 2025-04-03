#include<stdio.h>
#define a num &~ (1<<np)
main ()
{
	int num,i,np;
	printf("enter the number:\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("enter the Nth position:\n ");
	scanf("%d",&np);
	num=a;
	printf("after clear bit:\n");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
