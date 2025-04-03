#include<stdio.h>
main ()
{
	int num,num1;
	int i,a=0,sp,cb,b,bp;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("set a bit\n");//a)set a bit value//
	scanf("%d",&sp);
	num=num | 1<<sp;
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("clear the bit\n");//b)clear the bit or toggle bit//
	scanf("%d",&cb);
	num=num & ~(1<<cb);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("enter the bit position:\n");
	scanf("%d",&bp);
	num=num ^ (1<<bp);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

}
