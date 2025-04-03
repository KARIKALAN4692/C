#include<stdio.h>
main ()
{
	char str[30];
	int i=0,j=0,k=0;
	printf("enter the string:\n");
	scanf("%[^\n]",str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]==' ')
			{
				for(j=i;str[j];j++)
					str[j]=str[j+1];
				i--;

			}


		}
	}
	printf("%s\n",str);
}
