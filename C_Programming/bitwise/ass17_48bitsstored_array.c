#include<stdio.h>
main ()
{
	char buf[48];
	int i,num1,num2,a=0,b=0;
	printf("enter the number1\n");
	scanf("%d",&num1);
	printf("enter the number2 \n");
	scanf("%d",&num2);
	for(i=31;i>=0;i--)
		buf[i]=num1>>i&1;// binary value stored in array //
	for(i=32;i<=47;i++)
		buf[i]=num2>>i&1;
	for(i=47;i>=0;i--)
		printf("%d",buf[i]);//buffer contains 48 bit binary values//
	printf("\n");
	for(i=0;i<=31;i++)
		a=a | buf[i]<<i;// 32 bit value stored in a variable//
	printf("a=%d\n",a);
	for(i=32;i<=47;i++)
		b=b | buf[i]<<i;//16 bit value stored in b variable//
	printf("b=%d\n",b);

}
