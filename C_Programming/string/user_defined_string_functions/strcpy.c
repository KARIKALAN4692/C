#include<stdio.h>
void usr_strcpy(char*,char*);
main ()
{
	char a[20];
	char b[20];
	printf("enter the string:\n");
	scanf("%s",a);
	usr_strcpy(b,a);
	printf("after string copied:\n");
	printf("%s\n",b);
}
void usr_strcpy(char *p,char *q)
{
	int i=0;
	for(i=0;q[i];i++)
		p[i]=q[i];
	p[i]='\0';
}
