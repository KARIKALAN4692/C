#include<stdio.h>
main ()
{
	int i,p,j=0,n;
        printf("enter howmany values:\n ");
        scanf("%d",&n);
        int a[n];
        printf("enter the values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	printf("enter the position:\n");
	scanf("%d",&p);
	p=p-1;
	for(i=0;i<n;i++)
	{
		if(i==p)
			continue;
		a[j++]=a[i];
		
	}
       printf("after display values:\n");
	for(i=0;i<n-1;i++)
		printf("%d",a[i]);
	printf("\n");
}
