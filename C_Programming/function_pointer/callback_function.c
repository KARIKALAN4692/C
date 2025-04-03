#include<stdio.h>
void callback_function(void (*fun_ptr)(char*));
void function(char*);
void main()
{
	void (*fun_ptr)(char*)=&function;
	callback_function(fun_ptr);
}
void callback_function(void (*fun_ptr)(char*))
{
	printf("Enter into callback function\n");
	(*fun_ptr)("karikalan");
}
void function(char *string)
{
	printf("string=%s\n",string);

}
