#include<stdio.h>
#include<string.h>
main()
{
        char a[10],*p,*q;
        p=q=a;
        printf("enter the string:\n");
        scanf("%s",a);
        int len,l1,n,temp;
        len=strlen(a);
        q=q+len-1;
        n=len/2;
        printf("%d\n",n);
        while(p<q)
        {
                *p=*p^*q;
                *q=*q^*p;
                *p=*p^*q;
                p++;
                q--;
        }
        a[len+1]='\0';
        printf("%s\n",a);
                                  
}
