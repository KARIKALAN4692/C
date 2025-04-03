#include<stdio.h>
main ()
{
	int num,a,b,c,i;
	printf("enter the number\n");
	scanf("%d",&num);
	a=2;
	b=2;i=1;
	while(num>i)
	{
		b=b*a;
		if(b==num)
			break;
		i++;

	}
	if(b==num)
		printf("given num is power of 2:\n");
	else
		printf("given number is not power of 2:\n");
}
