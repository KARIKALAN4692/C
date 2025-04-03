#include<stdio.h>
main ()
{
	int num,i;
	int x;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("befor swapping\n");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("after swapping\n");
	x= num>>8 | num<<8 & 0xffff;
	for(i=31;i>=0;i--)
		printf("%d",x>>i&1);
	printf("\n");
	printf("%x\n",x);
}
