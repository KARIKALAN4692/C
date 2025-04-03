#include<stdio.h>
#include<string.h>
main ()
{
	char str[50];
        int i=0,count=0,size;
         printf("enter the string:\n");
         scanf("%[^\n]",str);
         size=strlen(str);
	for(i=0;i<size+1;i++)
	{
		if((str[i]==' ') || (str[i]=='\0'))
			count++;
	}
	printf("number of words:=%d\n",count);
}
