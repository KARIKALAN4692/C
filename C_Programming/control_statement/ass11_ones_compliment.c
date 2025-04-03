#include<stdio.h>
main ()
{
int num,i;
int x;
printf("enter the number\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
x=~num;
printf("after one's complement:\n");
for(i=31;i>=0;i--)
printf("%d",x>>i&1);
printf("\n");
printf("hexadecimal value:\n");
printf("%x\n",x);
printf("octal value:\n");
printf("%o\n",x);
}
