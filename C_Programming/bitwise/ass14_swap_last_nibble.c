#include<stdio.h>
main ()
{
	int num,i;
	unsigned int num1;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	num1=num<<28;
	printf("swap first nibble left side:\n");
	for(i=31;i>=0;i--)
		printf("%d",num1>>i&1);
	printf("\n");
	printf("swap last nibble right side:\n");
	num=num1>>28;
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
