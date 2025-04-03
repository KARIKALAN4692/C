#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char *buf,*p;
	char a[50],b[20],m[20],ch,c[20];
	int i=0,l1=0,count=0,n,j,l;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("enter the file:\n");
		return;
	}
	while(fgetc(fp)!=EOF)
		count++;
	printf("count=%d\n",count);
	buf=malloc(count+1);
	rewind(fp);
	i=0;
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
	buf[i]='\0';
	printf("%s",buf);
	printf("enter the word:\n");
	scanf("%s",m);
	l=0;
	i=0;
	while(buf[i])
	{
		p=strstr(buf,m);
		i++;
	}
	*p='\0';
	l=strlen(m);
	n=0;
	for(i=l;p[i];i++)
		a[n++]=p[i];
	a[n]='\0';
	j=0;
	i=0;
	while(m[j++]);
         j=j-2;
	while(j>=0)
		c[i++]=m[j--];
	c[i]='\0';
        strcat(buf,c);
        strcat(buf,a);
       printf("after replace the word:\n");
       printf("%s",buf);
        rewind(fp);
        i=0;
        while(buf[i])
        {
        fputc(buf[i],fp);
         i++;
        }










}
