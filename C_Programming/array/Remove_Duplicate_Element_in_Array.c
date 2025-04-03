#include<stdio.h>
main ()
{
	char a[10],i=0,j=0,k=0,n=10;
        printf("enter the element:\n");
	for(i=0;i<n;i++)
		scanf(" %c",&a[i]);
	printf("display value:\n");
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;


			}
	}
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	printf("\n");

}
