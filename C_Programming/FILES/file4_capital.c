#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (int argc,char*argv[])
{
	FILE *fp;
	int count=0,l1=0,i=0;
	char *buf,ch;
	char a[128];
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgetc(fp)!=-1)
		count++;
	printf("count=%d\n",count);
	buf=malloc(count+1);
	rewind(fp);
	i=0;
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
	buf[i]='\0';
	printf("%s",buf);
	i=0;
	while(buf[i])
	{
		if(i==0 && (buf[i]>='a' && buf[i]<='z'))
			buf[i]=buf[i]-32;
		if(buf[i]==' ' || buf[i]=='\n')
			if(buf[i+1]>='a' && buf[i+1]<='z')
				buf[i+1]=buf[i+1]-32;
		i++;
	}
	buf[i]='\0';
	printf("%s",buf);
	rewind(fp);
	i=0;
	while(buf[i])
	{
		fputc(buf[i],fp);
		i++;
	}
}

