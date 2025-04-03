#include<stdio.h>
#include<string.h>
main ()
{
	char a[128],b[123],c[123];
	int i=0,j=0;
	int m=0,n=0;
	char t;
	printf("enter the string:\n");
	gets(a);
	strcpy(b,a);
	for(i=0;a[i];i++)
	{
		if(a[i]==' ')
			for(j=i;a[j];j++)
			{
				a[j]=a[j+1];
			}
	}
	a[i]='\0';
	for(i=0;a[i];i++)
	{
		if(i!=0)
			if(i%4==0)
			{
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}


	}
	a[i]='\0';
	printf("%s\n",a);
	printf("%s\n",b);
	int l=0,l1=0;       
	for(i=0;b[i];i++)
	{
		if(b[i]==' ')
			c[l++]=' ';
		else
			c[l++]=a[l1++];


	}
	c[l]='\0';
	printf("%s\n",c);

}
