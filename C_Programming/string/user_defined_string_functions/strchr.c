#include<stdio.h>
char *usr_strchr(char*,char);
main ()
{
	char a[20];
	char ch;
	int *p=0;
	printf("enter the string:\n");
	scanf("%s",a);
	printf("enter the character:\n");
	scanf(" %c",&ch);
	p=usr_strchr(a,ch);
	if(p)
		printf("string=%s\n char=%c\n address=%u\n",a,ch,p);
	else
		printf("not found:\n");
}
char *usr_strchr(char *q,char c)
{
	int i=0;
	for(i=0;q[i];i++)
		if(q[i]==c)
			return(q+i);
	return 0;

}
