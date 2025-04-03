#include<stdio.h>
main ()
{
	char str1[20];
	char str2[20];
        int i=0;
	printf("enter the first string:\n");
	scanf("%s",str1);
	printf("enter the second string:\n");
	scanf("%s",str2);
	for(i=0;str1[i],str2[i];i++)
	{
		if(str1[i]!=str2[i])
			break;
	}
	if(str1[i]!=str2[i])
		printf("given strings are not equal:\n");
	else
		printf("given strings are  equal:\n");
}
