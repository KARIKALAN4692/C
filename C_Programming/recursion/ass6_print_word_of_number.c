#include<stdio.h>
int fun(int);
main ()
{
	int num;
	printf("enter the numebr:\n");
	scanf("%d",&num);
	fun(num);
}
int fun(int n)
{
	int x;
	if(x=n%10)
		if((n=n/10)>0)
			fun(n);
	switch(x)
	{
		case 1:printf("one\n");
		       break;
		case 2:printf("two\n");
		       break;
		case 3:printf("three\n");
		       break;
		case 4:printf("four\n");
		       break;
		case 5:printf("five\n");
		       break;
		case 6:printf("six\n");
		       break;
		case 7:printf("seven\n");
		       break;
		case 8:printf("eight\n");
		       break;
		case 9:printf("nine\n");
		       break;
	}



}
