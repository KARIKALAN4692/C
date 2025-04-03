#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the n Element:\n");
    scanf("%d",&n);    
    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter The Element:\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(arr[i]==arr[j])
        {
            for(k=j;k<n;k++)
            arr[k] = arr[k+1];

            j--;
            n--;
            count++;
        }


    }
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\n");

}