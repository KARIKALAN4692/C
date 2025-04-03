#include<stdio.h>
main ()
{
	char str[50],ch;
	int i=0,j=0;
	printf("enter the string:\n");
	scanf("%s",str);
	printf("enter the character:\n");
	scanf(" %c",&ch);
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			continue;
		else
			str[j++]=str[i];
	}
	str[j]='\0';
	printf("%s\n",str);
}
