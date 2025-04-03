#include<stdio.h>
main ()
{
	int arr[10],i,j=1,num,sum=0;
	printf("enter the number:\n");
	scanf("%d",&num);
         for(i=0;i<num;i++)
         scanf("%d",&arr[i]);
	for(i=0;i<num;i++)
	{
		arr[i]=j*j;
		j++;

	}
	printf("display the series value in array:\n");
	for(i=0;i<num;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<num;i++)
		sum=sum+arr[i];
	printf("sum of value:=%d\n",sum);

}

