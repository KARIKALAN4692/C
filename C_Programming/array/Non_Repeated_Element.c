#include<stdio.h>
main ()
{
	int arr1[10],n=10,i=0,count=0,l=0;
	int arr2[10], arr3[10],m=10,j,k=0;
	printf("enter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=arr1[i];

	}
	printf("display value:\n");
	printf("array 1:\n");
	for(i=0;i<n;i++)
		printf("%d",arr1[i]);
	printf("\n");
	printf("array 2:\n");
	for(i=0;i<n;i++)
		printf("%d",arr2[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(arr1[i]==arr1[j])
			{
				for(k=j;k<n;k++)
					arr1[k]=arr1[k+1];
				n--;
				j--;
			}
	}
	for(i=0;i<n;i++)
		printf("%d",arr1[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			if(arr1[i]==arr2[j])
				count++;

		if(count==1)
		{
			arr3[l]=arr1[i];
			l++;
		}
		count=0;
	}
	printf("l=%d\n",l);
	printf("display non repeated number:\n");
	for(i=0;i<l;i++)
		printf("num=%d\n",arr3[i]);




}
