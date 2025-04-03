#include<stdio.h>
#include<stdlib.h>
main ()
{
	int **dp;
	int i,j,n,row,col;
	printf("enter the rows\n");
	scanf("%d",&row);
	printf("enter the columns\n");
	scanf("%d",&col);
	n=row*col;
	dp=malloc(sizeof(int*)*n);
	for(i=0;i<row;i++)
		dp[i]=malloc(sizeof(int)*col);
	printf("enter the number\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&dp[i][j]);
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d",dp[i][j]);
		printf("\n");
	}
}
