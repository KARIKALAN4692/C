#include<stdio.h>
void fun(char*);
main ()
{
	char *p="abcde";
        printf("%s\n",p);
	fun(p);
}
void fun(char *q)
{
	if(*q)
	{
		fun(q+1);
		printf("%c\n",*q);
	}
}
