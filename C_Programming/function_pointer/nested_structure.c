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
	struct student record;
	record.rollno=1;
	strcpy(record.name,"karikalan");
	record.marks=79.5;
	record.data.clgno=100;
	printf("rollno=%d\t name=%s\t marks=%f\t clgcode=%d\t\n",record.rollno,record.name,record.marks,record.data.clgno);

}
