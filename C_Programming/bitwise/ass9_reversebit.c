#include<stdio.h>
main ()
{
	int num,i,a,b,j,d=0;
	unsigned int c=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	for(i=31,j=0;i>j;i--,j++)
	{
		a=num>>i&1;
		b=num>>j&1;
		if(a!=b)
                {
			num=num ^ (1<<i);
                        num=num ^(1<<j);
                }
	}
	printf("reverse the bits\n");
	for(i=31;i>=0;i--)
		printf("%d",c>>i&1);
	printf("\n");
	printf("rearrange the bits\n");
	for(i=31,j=0;i>j;i--,j++)
	{
		a=c>>i&1;
		b=c>>j&1;
		if(a!=b)
			d=d | 1<<j;
	}
	for(i=31;i>=0;i--)
		printf("%d",d>>i&1);
	printf("\n");
}

