#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (int argc,char*argv[])
{
	FILE *fp;
	char buf[128];
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("file is not there:\n");
		return;
	}
	while(fgets(buf,128,fp))
	{
		if(strstr(buf,argv[1]))
			printf("%s",buf);
	}

}
