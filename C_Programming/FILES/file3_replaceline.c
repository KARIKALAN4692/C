#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char a[128];
	char b[128];
	int l1=0,i=0,n;
	char **dp;
	fp=fopen(argv[1],"r+");
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
	printf("enter the string line:\n");
	gets(b);
	printf("enter the replace line:\n");
	scanf("%d",&n);
	rewind(fp);
	for(i=0;i<l1;i++)
	{
		if(i==n-1)
			fputs(b,fp);
		else
			fputs(dp[i],fp);
	}

}
