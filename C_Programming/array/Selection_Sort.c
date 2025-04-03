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
        for(j=i+1;j<n;j++)
        if(arr[i]>arr[j])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }

    printf("Sorted Arrays;\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    printf("\n");


}