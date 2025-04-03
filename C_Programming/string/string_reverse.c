#include<stdio.h>
main ()
{
	char str[50];
	char str1[50];
	int i=0,j=0;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++);
	i=i-1;
	for(j=0,i=i;str1[j]=str[i];i--,j++);
	//str1[j]='\0';(it is not neccessary)
	printf("after display string:\n");
	printf("%s\n",str1);
}
