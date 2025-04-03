#include<stdio.h>
main ()
{

	int num1,num2,num3;

	printf("enter the three number\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);

	if(num1>=num2 && num1>=num3)
		printf("number 1 is big\n");
	else if(num2>=num3 && num2>=num1)
		printf("number 2 is big\n");
	else
		printf("number 3 is big\n");
}
