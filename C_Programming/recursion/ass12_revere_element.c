#include<stdio.h>
main ()
{
	int n,i,a[5];
	printf("enter the number:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	n=sizeof(a)/sizeof(a[0]);
	printf("display result:\n");
	fun(a,n);
}
int fun(int *arr,int n)
{
	static int i=0;
	int b[5];
	if(n==0)
		return;
	else
	{
		b[i]=arr[n-1];
		printf("b[]=%d\n",b[i]);
		i++;
		fun(arr,n-1);
	}

}
