#include<stdio.h>
main ()
{

	int i,j,a1,a2,b1,n,count=0;
	printf("howmany number:\n");
	scanf("%d",&n);
	printf("enter the number:\n");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("display value:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	a1=a[0];
	a2=a[0];
	for(i=0;i<n;i++)
	{
		if(a1<a[i])
			a1=a[i];
		count++;
		if(count==n)
			break;
		b1=a1;
	}
	for(i=0;i<n;i++)
		if(a2>a[i] || a2<a[i])
		{
			a2=a[i];
			break;
		}


	printf("second largest:=%d\n",b1);
	printf("second smallest:%d\n",a2);
}
