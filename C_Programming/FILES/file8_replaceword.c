#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char ch,a[20],b[20],c[50];
	char *buf,*p;
	int i=0,count=0,l,j=0;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgetc(fp)!=EOF)
		count++;
	printf("count=%d\n",count);
	buf=malloc(count+1);
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
	buf[i]='\0';
	printf("%s",buf);
	printf("enter the word:\n");
	scanf("%s",a);
	printf("enter the replace word:\n");
	scanf("%s",b);
       i=0;
        while(buf[i])
        {
        p=strstr(buf,a);
        i++;
        }
         l=strlen(a);
         j=0;
        for(i=l;p[i];i++)
        c[j++]=p[i];
        c[j]='\0';
        *p='\0';
        strcat(buf,b);
        strcat(buf,c);
        printf("after replace the word:\n");
        printf("%s",buf);
       rewind(fp);
        i=0;
       while(buf[i]) 
       {
       fputc(buf[i],fp);
       i++;
       }
       //fclose(fp);

}
