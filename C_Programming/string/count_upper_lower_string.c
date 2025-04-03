#include<stdio.h>
main ()
{
	char str[50];
	int count=0,count1=0,count2=0,count3=0,i=0;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]>=65 && str[i]<= 90)
			count++;
		else if(str[i]>=97 && str[i]<=122)
			count1++;
		else if(str[i]>=48 && str[i]<=57)
			count2++;
		else
			count3++; 
	}
	printf("Upper=%d\n",count);
	printf("Lower=%d\n",count1);
	printf("digit=%d\n",count2);
	printf("extra character:=%d\n",count3);
}
