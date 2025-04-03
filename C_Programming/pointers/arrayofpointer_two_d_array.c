//making two dimensional array using array of pointer//
#include<stdio.h>
#include<stdlib.h>
main ()
{
        int row;
        printf("enter the rows\n");
        scanf("%d",&row);
	int *p[row];
	int col;
	printf("enter the column\n");
	scanf("%d",&col);
	int i,j;
	for(i=0;i<row;i++)
		p[i]=malloc(sizeof(int)*col);
	printf("enter the elements\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&p[i][j]);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d",p[i][j]);
		printf("\n");
	}
}
