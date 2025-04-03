#include<stdio.h>
main ()
{
	int num1,num2;
	printf("enter the number1\n");
	scanf("%d",&num1);
	printf("enter the number1\n");
	scanf("%d",&num2);
	num1=num1^num2;
	num2=num2^num1;
	num1=num1^num2;
	printf("num1=%d\n",num1);
	printf("num2=%d\n",num2);
}
