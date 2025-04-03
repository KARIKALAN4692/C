#include<stdio.h>
main ()
{
	int num,i,bp,hb,c=0;
	int num2,num1;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("enter the bit position\n");
	scanf("%d",&bp);
	printf("enter the how many bit delete\n");
	scanf("%d",&hb);
	unsigned int a=0;
	a=num<<(32-bp);
	a=a>>(32-bp);
	printf("%d\n",a);
	//int a[bp];
	//for(i=bp-1;i>=0;i--)
	//	a[i]=num>>i&1;
	printf("\n");
	num1=num>>bp;
	num2=num1>>hb;
	num2=num2<<bp;
	//for(i=bp-1;i>=0;i--)
	num2=num2 | a;//a[i]<<i;
	printf("after deleting bits\n");
	for(i=31;i>=0;i--)
{
		printf("%d",num2>>i&1);
c++;
}
printf("c=%d",c);

	printf("\n");
}
