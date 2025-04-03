#include<stdio.h>
#include<string.h>
struct clgcode
{
	int clgno;
};
struct student
{
	int rollno;
	char name[15];
	float marks;
	struct clgcode data;
};
void main()
{
	struct student record,*pointer;
	pointer=&record;
	pointer->rollno=1;
	strcpy(pointer->name,"karikalan");
	pointer->marks=79.5;
	pointer->data.clgno=100;
	printf("rollno=%d\t name=%s\t marks=%f\t clgcode=%d\t\n",pointer->rollno,pointer->name,pointer->marks,pointer->data.clgno);

}
