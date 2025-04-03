#include<stdio.h>
main ()
{
	int i,big,small,n;
	printf("enter how many number:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("display:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	big=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{		
		if(big<a[i])
			big=a[i];
		if(small>a[i])
			small=a[i];
	}
	printf("small:=%d\n",small); 
	printf("big:=%d\n",big);


}
