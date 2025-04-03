#include<stdio.h>
main()
{
	int n,i,hb,bp;
	unsigned int n1;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the bit postion\n");
	scanf("%d",&bp);
	printf("enter the howmany bits:\n");
	scanf("%d",&hb);
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);
	printf("\n");
	n=n>>bp;
	n1=n<<(32-hb);
	n=n1>>(32-hb);
	printf("%d\n",n);

}
