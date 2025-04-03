#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{
	char **dp;
	char p[128];
	int i=0,n,s=0,t,len,k,j;
	printf("enter the number of line:\n");
	scanf("%d",&n);
	dp=malloc(sizeof(char*)*n);
	for(i=0;i<n;i++)
		dp[i]=malloc(sizeof(char)*128);
	printf("enter the string:\n");
	for(i=0;i<n;i++)
		scanf(" %[^\n]",dp[i]);
	printf("display the string:\n");
	for(i=0;i<n;i++)
		printf("%s\n",dp[i]);
	printf("display result:\n");

	for(i=0;i<n;i++)
	{
                 


		s=0;
		strcpy(p,dp[i]);
                 
		len=strlen(dp[i]);
		for(j=0;j<len+1;j++)
		{
			if(p[j]==' ' || p[j]=='\0')
			{
				for(k=j-1;k>s;k--,s++)
				{
					t=p[k];
					p[k]=p[s];
					p[s]=t;
				}
				s=j+1;
			}
		}
		printf("%s\n",p);
	}
}
