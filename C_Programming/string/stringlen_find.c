#include<stdio.h>
main ()
{
    char a[10];
    char *p=a;
    int count=0;
    printf("enter the string:\n");
    scanf("%s",a);
    printf("after display:\n");
    while((*p)!='\0')
    {
        count++;
        ++p;
    }
    printf("strlen=%d\n",count);
}
