#include<stdio.h>
int fun(int);
int rev;
main ()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	rev=fun(num);
        if(rev==num)
	printf("given number palindrome=:%d\n",rev);
        else
        printf("given number is not palindrome:\n");
}
int fun(int num)
{
	if(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
		fun(num);
	}
	else
		return rev;

}
