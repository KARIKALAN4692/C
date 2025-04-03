#include<stdio.h>
main ()
{
	int num,a,b,c,i,n;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("which number power find\n");
	scanf("%d",&n);
	b=n;i=1;
	while(num>i)
	{
		b=b*n;
		if(b==num)
			break;
		i++;

	}
	if(b==num)
		printf("given num is power of given power:\n");
	else
		printf("given number is not power of given number:\n");
}
