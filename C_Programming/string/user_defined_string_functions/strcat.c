#include<stdio.h>
void usr_strcat(char*,char*);
main ()
{
	char a[20];
	char b[10];
	printf("enter the string:1\n");
	scanf("%s",a);
	printf("enter the string:1\n");
	scanf("%s",b);
	usr_strcat(a,b);
	printf("%s\n",a);
}
void usr_strcat(char *p,char *q)
{
	int i=0,j=0;
	int l1=0,l2=0;
	while(p[i])
	{
		l1++;
		i++;
	}
	while(q[j])
	{
		p[l1++]=q[j++];
	}
	p[l1]='\0';
}
