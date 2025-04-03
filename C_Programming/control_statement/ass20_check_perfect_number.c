#include<stdio.h>
main ()
{
	int num,a=1,i=2;
	printf("enter the any number\n");
	scanf("%d",&num);
	while(num>i)
	{
		a=a+i;
		i++;
		if(a==num)
			break;
	}
	if(a==num)
		printf("given number is perfect number:\n");
	else
		printf("given number is not perfect number:\n");
}
