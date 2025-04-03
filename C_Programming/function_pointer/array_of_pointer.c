#include<stdio.h>
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void main()
{
	void (*func_ptr[])(int,int)={addition,subtraction,multiplication};
	int op;
	printf("Enter The Number\n");
	scanf("%d",&op);
	op=op-1;
		(*func_ptr[op])(10,20);

}
void addition(int var1,int var2)
{
	printf("add=%d\n",var1+var2);
}
void subtraction(int var1,int var2)
{
	printf("sub=%d\n",var2-var1);
}
void multiplication(int var1,int var2)
{
	printf("mul=%d\n",var1*var2);
}
