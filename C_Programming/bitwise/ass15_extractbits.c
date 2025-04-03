#include<stdio.h>
main ()
{
	int num,i,num1,bp,hb,n=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("enter the bit postion\n");
	scanf("%d",&bp);
	printf("enter the how many bits\n");
	scanf("%d",&hb);
	num1=num>>bp;
	int a[hb];
	for(i=hb-1;i>=0;i--)
		a[i]=num1>>i&1;
	printf("display extract bit:\n");
	for(i=hb-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
	for(i=hb-1;i>=0;i--)
		n=n |a[i]<<i;
	printf("display extract bit value:\n");
	printf("n=%d\n",n);
}
