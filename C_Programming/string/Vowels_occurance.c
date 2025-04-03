#include<stdio.h>
main ()
{
	char str[50];
	int count=0,i=0,j=0;
        char buf[50];
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
   		if(str[i]=='A' ||str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
               {   
               buf[j++]=str[i]; 
               printf("%c",str[i]);
               }
        
	}
       printf("\n");       
        buf[j]='\0';
        printf("buf=%s\n",buf);
      printf("\n");


}
