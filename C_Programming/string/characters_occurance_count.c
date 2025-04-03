#include<stdio.h>
main ()
{
	char a[10],ch;
        int count=0,i=0;
	printf("enter the string:\n");
	scanf("%s",a);
	printf("enter the character:\n");
	scanf(" %c",&ch);
	for(i=0;a[i];i++)
	{
		if(ch==a[i])
			count++;
	}
      printf("charecter occurance=:%d\n",count);
}
