#include<stdio.h>
main ()
{
	unsigned long long int num,pow,b;
	printf("enter the number\n");
	scanf("%lld",&num);
	printf("enter the power number\n");
	scanf("%lld",&pow);
	b=num;
	while(pow-- > 1)
		num=num*b;
	printf("%lld\n",num);
}
