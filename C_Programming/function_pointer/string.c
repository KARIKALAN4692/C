#include <stdio.h>
void function(char*);
void main()
{
	void (*string_char)(char*)=&function;
	(*string_char)("karikalan");

}
void function(char *string)
{

	printf("string=%s\n",string);
}


