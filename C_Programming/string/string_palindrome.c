#include<stdio.h>
#include<string.h>
main ()
{
	char str[20];
	char str1[20];
	int i=0,j=0;
	printf("enter the first string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++);
	i=i-1;
	for(j=0,i=i;str1[j]=str[i];j++,i--);
	printf("display result:\n");
	if(strcmp(str,str1)==0)
		printf("given string is palindrome:\n");
	else
		printf("given string is not palindrome:\n");


}
