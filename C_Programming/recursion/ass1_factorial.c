#include<stdio.h>
int fun(int,int);
main ()
{
	static int fact=1;
	int k;
	static int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	k=fun(num,fact);
	printf("%d\n",k);
}
int fun(int num,int fact)
{
	if(num>0)
	{
		fact=fact*num--;
		fun(num,fact);


	}
	else
		return fact;

}
