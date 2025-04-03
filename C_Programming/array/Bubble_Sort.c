#include<stdio.h>
int main()
{
    int n;
    printf("Enter How many Element:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter The Element:\n");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        {
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        
    }

    printf("Sorted Arrays;\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    printf("\n");

