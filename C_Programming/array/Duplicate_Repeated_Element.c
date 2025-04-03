#include<stdio.h>
main ()
{
	int arr[10],n=10,i,k=0;
	int slot1[10],slot2[10],j,l=0,count=0;
	printf("enter the element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("display value:\n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
					arr[k]=arr[k+1];
				n--;
				j--;
				count++;
				if(count==1)
					slot2[l++]=arr[i];
			}
		count=0;



	}
	for(i=0;i<n;i++)
		slot1[i]=arr[i];
	printf("without duplicate element slot1:\n");
	for(i=0;i<n;i++)
		printf("%d",slot1[i]);
	printf("\n");
	printf("repeated value slot2:\n");
	for(i=0;i<l;i++)
		printf("%d",slot2[i]);
	printf("\n");

}
