#include<stdio.h>
main ()
{
	char ch;
	printf("enter the character:\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
		ch=ch+32;
	else
		ch=ch-32;
	printf("character is :%c\n",ch);
}
