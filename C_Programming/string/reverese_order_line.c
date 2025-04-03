#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{
	char **dp,temp;
	char p1[128];
	char p[128];
	char p2[128];
	int i=0,n,s=0,t,len,j,n1,len1,l,count=0,k;
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
		n1=0;
		strcpy(p1,dp[i]);   
		printf("%s\n",p1);  
		len1=strlen(p1);
		printf("len=%d\n",len1);
		for(l=len1-1;l>=0;l--)
			p[n1++]=p1[l];
		p[n1]='\0';
	}
	printf("%s\n",p);
	len=strlen(p);
	for(i=0;i<len+1;i++)
	{
		if(p[i]==' ' || p[i]=='\0')
		{
			for(j=i-1;j>k;j--,k++)
			{
				temp=p[j];
				p[j]=p[k];
				p[k]=temp;


			}
			k=i+1;
		}

	}
printf("%s\n",p);
//importent another logic//

	/*for(i=0;i<len+1;i++)
	  {
	  if(p[i]!=' ' || p[i]!='\0')
	  count++;
	//count=count-1;
	//          printf("count=%d",count);
	if(p[i]==' ' || p[i]=='\0')
	{
	count=count-1;
	printf("count=%d\n",count);

	for(j=count-1;j>=0;j--)
	p2[k++]=p[j];
	p2[k]=' ';
	count=0;
	printf("count=%d\n",count);
	}
	}
	printf("%s\n",p);*/







}

