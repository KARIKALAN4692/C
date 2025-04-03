#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (int argc,char*argv[])
{
	FILE *fp1,*fp2,*fp3;
	char a[128];
	char b[128];
	char **buf1,**buf2;
	fp1=fopen(argv[1],"r+");
	fp2=fopen(argv[2],"r+");
	fp3=fopen(argv[3],"w+");
	if(fp1==0 ||fp2==0)
	{
		printf("enter the file name:\n");
		return;
	}
	int l1=0,l2=0;
	while(fgets(a,128,fp1))
		l1++;
	while(fgets(b,128,fp2))
		l2++;
	printf("l1=%d\nl2=%d\n",l1,l2);
	int i=0,j=0;
	buf1=malloc(sizeof(char*)*l1);
	for(i=0;i<l1;i++)
		buf1[i]=malloc(sizeof(char)*128);
	buf2=malloc(sizeof(char*)*l2);
	for(j=0;j<l2;j++)
		buf2[j]=malloc(sizeof(char)*128);
	rewind(fp1);
	rewind(fp2);
	i=0;
	while(fgets(a,128,fp1))
	{
		strcpy(buf1[i],a);
		i++;
	}
	j=0;
	while(fgets(b,128,fp2))
	{
		strcpy(buf2[j],b);
		j++;
	}
	for(i=0;i<l1;i++)
		printf("%s",buf1[i]);
	for(j=0;j<l2;j++)
		printf("%s",buf2[j]);
	rewind(fp1);
	rewind(fp2);
	for(i=0,j=0;i<l1,j<l2;i++,j++)
	{
		if(i<l1 && j<l2)
		{
			fputs(buf1[i],fp3);
			fputs(buf2[j],fp3);
		}
	}
        printf("i=%d\n j=%d\n",l1,l2);
	while(l1>l2)
	{
		fputs(buf1[i++],fp3);
		l2++;
	}
	while(l2>l1)
	{
		fputs(buf2[j++],fp3);
		l1++;
	}


}


