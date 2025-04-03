#include<stdio.h>
main (int argc,char*argv[])
{
	FILE *fp[4];
	int i=0;
	char ch;
	fp[1]=fopen(argv[1],"r");
	if(fp[1]==0)
	{
		printf("file is not there:\n");
		return;
	}
	for(i=2;i<argc;i++)
		fp[i]=fopen(argv[i],"w+");
	while((ch=fgetc(fp[1]))!=EOF)
		for(i=2;i<argc;i++)
			fputc(ch,fp[i]);
	fclose(fp[1]);
}
