#include<stdio.h>
main ()
{
	int num,num1,i;
	printf("enter the number:\n");
	scanf("%d",&num);
	num1=num;
	for(i=31;i>=0;i--)
		printf("%d",num1>>i&1);
	printf("\n");
}
