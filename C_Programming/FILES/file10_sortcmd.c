#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char a[128],temp[128];
	char **buf;
	int l1=0,i=0,j=0;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgets(a,128,fp))
		l1++;
	printf("l1=%d\n",l1);
	buf=malloc(sizeof(char*)*l1);
	for(i=0;i<l1;i++)
		buf[i]=malloc(sizeof(char)*128);
	rewind(fp);
	i=0; 
	while(fgets(a,128,fp))
	{
		strcpy(buf[i],a);
		i++;
	}
	for(i=0;i<l1;i++)
		printf("%s",buf[i]);
	for(i=0;i<l1-1;i++)
	{
		for(j=i+1;j<l1;j++)
			if(strlen(buf[i])>strlen(buf[j]))
			{
				strcpy(temp,buf[i]);
				strcpy(buf[i],buf[j]);
				strcpy(buf[j],temp);
			}

	}
	printf("after display result:\n");
	for(i=0;i<l1;i++)
		printf("%s",buf[i]);
	rewind(fp);
	for(i=0;i<l1;i++)
		fputs(buf[i],fp);





}
