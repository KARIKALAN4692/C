#include<stdio.h>
main ()
{
	int num;
	printf("enter the month number\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("january\n");
		       break;
		case 2:printf("february\n");
		       break;
		case 3:printf("march\n");
		       break;
		case 4:printf("april\n");
		       break;
		case 5:printf("may\n");
		       break;
		case 6:printf("june\n");
		       break;
		case 7:printf("july\n");
		       break;
		case 8:printf("auguest\n");
		       break;
		case 9:printf("septemper\n");
		       break;
		case 10:printf("october\n");
			break;
		case 11:printf("navember\n");
			break;
		case 12:printf("december\n");
			break;
		default:printf("invalid month\n");
	}


}
