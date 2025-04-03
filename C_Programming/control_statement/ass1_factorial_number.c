#include<stdio.h>
main ()
{
	int num,fact=1;
	printf("enter the number:\n");
	scanf("%d",&num);

	while(num>0)
	{
		fact=fact*num;
		num--;
	}

	printf("factorial value=%d\n",fact);

}
