#include<stdio.h>
int fun(int *p,int lar)
{
	static int j=0;
	if(j<5)
	{
		if((lar<p[j]))

			lar=(p[j]);
		j++;
		fun(p,lar);
	}
	else
		return lar;
}
main()
{
	int i,k,lar,a[5];
	printf("enter the element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=a[0];
	k=fun(a,lar);
	printf("largest element:%d\n",k);
}
