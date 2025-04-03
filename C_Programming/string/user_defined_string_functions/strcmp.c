#include<stdio.h>
int usr_strcmp(char*,char*);
main ()
{
	char a[20];
	char b[20];
	int x=0;
	printf("enter the string:1\n");
	scanf("%s",a);
	printf("enter the string:2\n");
	scanf("%s",b);
	x=usr_strcmp(a,b);
	if(x==0)
		printf("strings are equal:\n");
	else
		printf("strings are not equal:\n");
}
int usr_strcmp(char *p,char *q)
{
	int i=0;
	for(i=0;p[i],q[i];i++)
		if(p[i]!=q[i])
			break;
	if(p[i]>q[i])
		return 1;
	else if(p[i]<q[i])
		return -1;
	else
		return 0;
}
