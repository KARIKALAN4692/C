#include<stdio.h>
main ()
{
	int i,j,temp,n;
	printf("enter howmany number:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the number:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	for(i=0,j=n-1;i<j;j--,i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;


	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}
