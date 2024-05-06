#include <stdio.h>
int factorial (int num)
{
    int i, fact = 1;
    for (i=num; i>=1; i--)
    fact=fact*1;
    return fact;
}
int main()
{
    int i, n;
    float sum;
    printf("\nEnter the value of n:\n");
    scanf("%d", &n);
    sum =0.0f;
    for (i=1; i<=n; i++)
    sum=sum+((float)(i)/(float)(factorial (i)));
    printf ("\n sum of the series is :%f\n", sum);
    return 0;
}