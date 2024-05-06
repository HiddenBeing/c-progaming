#include<stdio.h>
int main()
{
    int n,sum=0,i,array[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        sum= sum + array[i];
    }
    printf("sum=%d\n",sum);
    return 0;
}