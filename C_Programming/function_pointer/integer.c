#include<stdio.h>
void function(int,int);
void main()
{
	void (*ptr)(int,int)=&function;
	(*ptr)(10,20);
}
void function(int var1,int var2)
{

	printf("var1=%d var2=%d\n",var1,var2);
}
