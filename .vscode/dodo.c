#include<stdio.h>
int main()
{   
    int i, n;
    int arr[n];
    float sum=0, mean=0;
    {
        printf("enter the term:\n");
        scanf("%d\n", &n);
        for(i=0;i<n;i++)
        {
            printf("\n arr[%d]= ", i);
            scanf("%d", &arr[i]);
        }
        for(i=0;i<n;i++)
        sum=sum+arr[n];
        mean=sum/n;
    }
    printf("The mean is: %f\n", mean);
    return 0;
}