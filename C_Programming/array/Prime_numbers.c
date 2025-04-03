#include<stdio.h>
main ()
{
	int a[10],i,b[5],count=0,j,l=0;
	printf("enter the number\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("display values:\n");
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	printf("\n");

	for(i=0;i<10;i++)
	{
		for(j=2;j<i;j++)
			if(a[i]%j==0)
				count++;
		if(count==0 && a[i]!=1)
		{
			b[l]=a[i];
			l++;
		}
		count=0;
	}

	printf("after store values:\n");
	for(i=0;i<l;i++)
			printf("%d",b[i]);
	printf("\n");
}
