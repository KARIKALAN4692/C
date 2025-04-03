#include<stdio.h>
main ()
{
	int a[10];
	int i;
	printf("enter the element\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("array elements are\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n");


}
