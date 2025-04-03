#include<stdio.h>
#include<stdlib.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char *buf,ch;
	int count=0,i=0,new=0,j=0;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("enter the file name cmd prompt:\n");
		return;
	}
	while(fgetc(fp)!=EOF)
		count++;
	printf("no of character:=%d\n",count);
	buf=malloc(count+1);
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
	buf[i]='\0';
	printf("%s",buf);
	i=0;
	while(buf[i])
	{
		if(buf[i]=='\n')
			new++;
		i++;
	}
	printf("new lines=%d\n",new);
	for(i=0;buf[i];i++)
	{
		if(buf[i]==' ' && buf[i+1]==' ')
		{
			for(j=i;buf[j];j++)
				buf[j]=buf[j+1];
			i--;
		}
	}
	buf[i]='\0';
	printf("%s\n",buf);
	int word=0;
	for(i=0;buf[i];i++)
		if(buf[i]==' ' || buf[i]=='\n')
			word++;
	printf("word=%d\n",word);





}
