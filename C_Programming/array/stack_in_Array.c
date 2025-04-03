#include<stdio.h>
int top;
int stk[5];
void push(int ele);
void pop();
void display();
main ()
{
	int ele,op;
	while(1)
	{
		printf("enter the option:\n1)push\n2)pop\n3)display()\n4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:if(top<5)
			       {
				       printf("enter the element:\n");
				       scanf("%d",&ele);
				       push(ele);

			       }
			       else
				       printf("stack is overflow:\n");
			       break;
			case 2:if(top>0)
				       pop();
			       else
				       printf("stack is underflow:\n");
			       break;
			case 3:display();
			       break;
			case 4:return;
			default:printf("your option is invalid: choose correct option\n");
		}
	}


}
void push(int ele)
{
	stk[top++]=ele;
}
void pop()
{
	printf("%d element poped:\n",stk[--top]);
	stk[top]=0;
}
void display()
{
	int i;
	if(top==0)
	{
		printf("stack is empty\n");
		return;
	}
	printf("display stack stored value:\n");
	for(i=top-1;i>=0;i--)
		printf("%d\n",stk[i]);
}


