#include<stdio.h>
main ()
{
int num1,num2;
printf("enter the number 1:\n");
scanf("%d",&num1);
printf("enter the number 2:\n");
scanf("%d",&num2);
printf("after result:\n");
while(num1<=num2)
{
printf("1*%d=%d\n",num1,num1*1);
num1++;
}
}
