#include<stdio.h>
main ()
{
	char ch,ch1;
	printf("enter the upper case letter\n");
	scanf("%c",&ch);
        if(ch>=65 && ch<=90)
         ch=ch |32;
        else
         ch=ch ^ 32;
           
	/*ch=ch |32;// one more logic ch=ch |1<<32
	printf("%c\n",ch);
	printf("enter the lower case\n");
	scanf(" %c",&ch1);
	ch1=ch1 ^ 32;//same logic ch1=ch1 ^ 1<<32*/
	printf("%c\n",ch);
}
