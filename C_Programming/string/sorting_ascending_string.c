#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{
	char **dp;
	char temp[20];
	int i=0,j=0,k=0,n=5;
	dp=malloc(sizeof(char*)*n);
	for(i=0;i<5;i++)
		dp[i]=malloc(sizeof(char)*20);
	printf("enter the string:\n");
	for(i=0;i<5;i++)
		scanf("%s",dp[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{     
			if(dp[i][0]>dp[j][0])
			{
				strcpy(temp,dp[i]);
				strcpy(dp[i],dp[j]);
				strcpy(dp[j],temp);

			}

		}
	}

	printf("display value:\n");
	for(i=0;i<5;i++)
		printf("%s\n",dp[i]);
}
