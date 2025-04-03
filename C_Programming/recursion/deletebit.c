#include<stdio.h>
main ()
{
	int num,i,n=2,m=4,num1;
	unsigned int a;
	printf("enter the number\n");
	scanf("%d",&num);
        
	printf("step 1:\n");
	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&1);
        //printf("enter the bit position:\n");
        //scanf("%d",&n);
	printf("\n");
	a=num<<(32-2);
	printf("step 1:\n");
	for(i=31;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
	a=a>>(32-2);
	printf("step 2:\n");
	for(i=31;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
	num=num>>2;
	printf("step 3:\n");
	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&1);
	printf("\n");
	num=num>>m;
	printf("step 4:\n");
	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&1);
	printf("\n");
	num=num<<2;
	printf("step 5:\n");
	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&1);
	printf("\n");
	num=num|a;
	printf("RESULT:\n");
	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&1);
	printf("\n");


}
