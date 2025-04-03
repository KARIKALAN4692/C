#include<stdio.h>
#include<string.h>
void fun(char*,char*);
main ()
{
	int n;
	char p[10]="ilango";
	n=strlen(p);
	printf("%s\n",p);
	char *q=p+(n-1);
	fun(p,q);
	printf("after display string:\n"); 
	printf("%s\n",p);

}
void fun(char *p,char *q)
{
	if((unsigned int)p > (unsigned int) q)
		return;
	fun(p+1,q-1);
	if(*p!=*q)
	{
		*p=*p^*q;
		*q=*q^*p;
		*p=*p^*q;
	}

}

