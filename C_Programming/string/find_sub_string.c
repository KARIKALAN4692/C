#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{
	char **dp;
	char sub[20];
	char *p;
	int i=0,n,count=0;
	printf("Enter the number of line:\n");
	scanf("%d",&n);
	dp=malloc(sizeof(char*)*n);
	for(i=0;i<n;i++)
		dp[i]=malloc(sizeof(char)*128);
	printf("Enter the main string:\n");
	for(i=0;i<n;i++)
		scanf(" %[^\n]",dp[i]);//__fpurge(stdin);clear stdin buffer//
	printf("Display lines:\n");
	printf("Enter the substring:\n");
	scanf("%s",sub);
	for(i=0;i<n;i++)
		printf("%s\n",dp[i]);
	i=0;
	while(i<n)
	{
		if(p=strstr(dp[i],sub))
			count++;
		i++;

	}
	printf("count=%d\n",count);
}
