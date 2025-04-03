#include<stdio.h>
main()
{
	unsigned int n=4294967295;
	unsigned int n1;
	n1=n<<8;
	if(n<n1)
		printf("64 byte order:\n");
	else
		printf("32 byte order:\n");

}
