#include<stdio.h>
main ()
{
	char buf[10];
	char buf1[10];
	int i=0;
	printf("enter the string:\n");
	scanf("%s",buf);
        printf("after display:\n");
	for(i=0;buf1[i]=buf[i];i++);
	printf("%s\n",buf1);
}
