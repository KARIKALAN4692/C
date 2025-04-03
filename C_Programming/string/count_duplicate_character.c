#include<stdio.h>
#include<string.h>
main ()
{
	char str[30];
	char str1[30];
	int i,j,k,count=0;
	printf("enter the string:\n");
	scanf("%[^\n]",str);
	strcpy(str1,str);
	for(i=0;str[i];i++)
	{
		for(j=i+1;str[j];j++)
			if(str[i]==str[j])
			{
				for(k=j;str[k];k++)
					str[k]=str[k+1];
				i--;
				j--;    

			}

	}
	printf("display strings:\n");
	printf("str=%s\n",str);
	printf("str1=%s\n",str1);
	printf("display duplicate character count:\n");
	for(i=0;str[i];i++)
	{
		for(j=0;str1[j];j++)
			if(str[i]==str1[j])
				count++;
		if(count>1)
			printf("Letter= %c count=%d\n",str1[i],count);
		count=0;
	}

}
