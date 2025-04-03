#include<stdio.h>
int fun(int);
//int x=0,y=1,z;
main ()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	//printf("fibonacci number:=%d\n",y);
	fun(num);
}
int fun(int num)
{
     static int x=0,y=1,z;
	if(num>0)
	{
		z=x+y;
		printf("fibonacci number:=%d\n",z);
		x=y;
		y=z;
		num--;
		fun(num);
	}
	else
		return;


}
