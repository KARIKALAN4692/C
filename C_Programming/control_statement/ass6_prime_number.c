#include<stdio.h>
main ()
{
	int num,i,j,count=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				count++;
		if(count==0 && i!=1)
			printf("prime number is :%d\n",i);
		count=0;
	}
}
