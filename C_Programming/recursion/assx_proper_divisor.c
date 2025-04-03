#include<stdio.h>
main ()
{
	int i=1,sum=0;
	int num=45;
	while(i<num)
	{
		sum=num%i;
		if(sum==0)
			printf("%d\n",i);
		i++;
	}

}
