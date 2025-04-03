#include<stdio.h>
main ()
{
	int num1,num2,a=0,b;
	printf("enter the number 1:\n");
	scanf("%d",&num1);
	printf("enter the number 2:\n");
	scanf("%d",&num2);
	if(((num1 ^ num2)==0) ? printf("number is equal\n"):printf("number is not equal\n"));
}
