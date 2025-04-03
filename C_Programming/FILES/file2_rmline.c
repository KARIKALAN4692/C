#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char a[128];
	fp=fopen(argv[1],"r+");
	char **dp;
	int l1=0,i=0,n;
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgets(a,128,fp))
		l1++;
	printf("lines=%d\n",l1);
	dp=malloc(sizeof(char*)*l1);
	for(i=0;i<l1;i++)
		dp[i]=malloc(sizeof(char)*128);
	rewind(fp);
	i=0;
	while(fgets(a,128,fp))
	{
		strcpy(dp[i],a);
		i++;
	}
	for(i=0;i<l1;i++)
		printf("%s",dp[i]);
	printf("enter the line:\n");
	scanf("%d",&n);
	n=n-1;
	rewind(fp); 
	fp=fopen(argv[1],"w");
	for(i=0;i<l1;i++)
	{
		if(i==n)
			continue;
		else
			fputs(dp[i],fp);
		printf("%s",dp[i]);
	}

}
