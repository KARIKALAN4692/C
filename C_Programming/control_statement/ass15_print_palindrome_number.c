#include<stdio.h>
main ()
{
	int num=1,num1,b,a,rev=0;
	printf("enter the number upto expected value:\n");
	scanf("%d",&num1);
	while(num1>num)
	{
		b=num;
		while(b>0)
		{
			a=b%10;
			rev=rev*10+a;
			b=b/10;
		}
		if(num==rev)
			printf("palindrome number is:%d\n",num);
		rev=0;
		num++;
	}
}
