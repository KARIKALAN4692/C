#include<stdio.h>
main ()
{
	char str[30];
	int i=0,j=0,k=0;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		for(j=i+1;str[j];j++)
			if(str[i]==str[j])
			{
				for(k=j;str[k];k++)
					str[k]=str[k+1];
				j--;
				i--;

			}

	}
	printf("%s\n",str);


}
