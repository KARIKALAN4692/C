#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char ch,a[20],b[20],c[50];
	char *buf,*p;
	char *buf2;
	int i=0,count=0,l,j=0;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgetc(fp)!=EOF)
		count++;
	printf("count=%d\n",count);
	buf=malloc(count+1);
	buf2=malloc(count+1);
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
	buf[i]='\0';
	printf("%s",buf);
	j=0;
	printf("count=%d\n",count);
	count=count-1;
	while(count>=0)
	{
		buf2[j++]=buf[count];
		count--;
	}
	printf("after the result:\n");
	printf("%s\n",buf2);
	rewind(fp);
	i=0;
	fp=fopen(argv[1],"w");
	while(buf2[i])
	{
		fputc(buf2[i],fp);

		i++;
	}
	fputc('\n',fp);

}
