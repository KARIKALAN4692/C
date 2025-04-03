#include<stdio.h>
main ()
{
	int num1,num2,ch,c;
	printf("enter the number 1:\n");
	scanf("%d",&num1);
	printf("enter the number 2:\n");
	scanf("%d",&num2);
	printf("options: \n 1:add\n 2:sub\n 3:mul\n 4:div\n 5:modulo\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:c=num1+num2;//here we provide only integer or character like 'a'//
		       printf("add=%d\n",c);
		       break;
		case 2:c=num1-num2;
		       printf("sub=%d\n",c);
		       break;
		case 3:c=num1*num2;
		       printf("mul=%d\n",c);
		       break;
		case 4:c=num1/num2;
		       printf("div=%d\n",c); 
		       break;
		default:c=num1%num2;
			printf("modulo=%d\n",c);

	}
}
