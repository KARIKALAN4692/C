#include<stdio.h>
#include<string.h>
void fun(char*,int);
main ()
{
	char *p="ilango";
	int n=0;
	n=strlen(p);
	n=n-1;
	fun(p,n);
}
void fun(char *q,int n)
{
	static int i=0;
	static char buf[20];
	if(n>=0)  
	{
		buf[i++]=q[n];
		n--;
		fun(q,n);    

	}
	else
	{
		buf[i]='\0';
		printf("%s\n",buf);
	}
}
