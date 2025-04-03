#include<stdio.h>
#include<string.h>
char* fun(char*,int);
main ()
{
	char str[50];
	int n;
	char *q;
	printf("enter the string\n");
	scanf("%s",str);
	printf("after display:\n");
	n=strlen(str);
	q=fun(str,n);
	printf("%s\n",q);
}
char* fun(char *p,int n)
{
	static int i=0,j;
	if(i==0)
		j=n-1;
	static char str[10];
	if(j>=0)
	{
		str[i]=p[j];
		j--;
		i++;
		n--;
		fun(p,j);
	}
	else
	{
		str[i]='\0';
		return str;
	}
}

