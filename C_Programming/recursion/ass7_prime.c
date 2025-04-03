#include<stdio.h>
int fun();
main ()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	fun(num);
}
int fun(int prime)
{
	static int i=0,n=0;
	int k=1,count=0;
	if(n<prime)
	{
abc:if(k<=i)
    {
	    if(i%k==0)
		    count++;
	    k++;
	    goto abc;
    }
    if(count==2)
    {
	    printf("prime number is:=%d\n",i);
	    n++;
    }
         i++;
       fun(prime);
	}


}
