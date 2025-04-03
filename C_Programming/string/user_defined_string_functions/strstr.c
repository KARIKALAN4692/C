#include<stdio.h>
char *usr_strstr(char*,char*);
main ()
{
	char a[10];
	char b[5];
	char *p=0;
	printf("enter the main string:\n");
	scanf("%s",a);
	printf("enter the sub strinbg:\n");
	scanf("%s",b);
	p=usr_strstr(a,b);
	if(p)
		printf("string found:%s\n",p);
	else
		printf("string not found:\n");
}
char *usr_strstr(char *p,char *q)
{
	int i=0,j=0;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(q[j]!=p[i+j])
					break;
			}
			if(q[j]=='\0')
				return(p+i);
			return 0;
		}

	}

}
