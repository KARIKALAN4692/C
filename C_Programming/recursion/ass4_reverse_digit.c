#include<stdio.h>
int fun();
main ()
{
	int num;
        int rev;
	printf("enter the number:\n");
	scanf("%d",&num);
	rev=fun(num);
	printf("reverse the digit=:%d\n",rev);
}
int fun(int num)
{
      static int rev;
	if(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
		fun(num);
	}
	else
		return rev;

}
