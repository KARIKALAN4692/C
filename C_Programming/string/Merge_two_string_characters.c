#include<stdio.h>
main ()
{
	char str1[50];
	char str2[50];
	char str3[50];
	int i=0,k=0,j=0,l1,l2;
	printf("enter the first string:\n");
	scanf("%s",str1);
	printf("enter the second string:\n");
	scanf("%s",str2);
	for(i=0,j=0;(str1[i]&&str2[j]);i++,j++)
	{
		if(str1[i]!='\0')
			str3[k++]=str1[i];
		if(str2[j]!='\0')
			str3[k++]=str2[j];
	}
	if(str1[i]=='\0')
		while(str3[k++]=str2[j++]);
	if(str2[j]=='\0')
		while(str3[k++]=str1[i++]);
	str3[k]='\0';
	printf("%s\n",str3);


}
