#include<stdio.h>
main ()
{
	char str[50];
        int i=0;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]=str[i]+32;
		else
			str[i]=str[i]-32;


	}
	printf("%s\n",str);

}
