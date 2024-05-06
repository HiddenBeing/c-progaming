#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of an array:");
    scanf("%d", &size);
    int arr [size];
    printf("enter the element:");
    for(int i=0;i<size;i++) 
    {
        scanf("%d\n", &arr[i]);
    }
    max(arr,size);
}
int max(int arr[], int n);
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        printf("%d\n", m);
    }
    return 0;
}