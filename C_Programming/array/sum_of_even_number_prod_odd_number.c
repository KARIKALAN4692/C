#include<stdio.h>
main ()
{
	int a[10],i,sum=0,prod=1;
	printf("enter the 10 number:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("display values:\n");
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
		
	for(i=0;i<10;i++)
		if(a[i]%2==0)
			sum=sum+a[i];
		else
			prod=prod*a[i];
	printf("sum of even number:sum=%d\n",sum);
	printf("product of odd number:prod=%d\n",prod);

}
