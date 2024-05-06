#include <stdio.h>
long int factorial (int n) ;
int main ()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    printf("Factorial of %d = %1d", n, factorial(n));
    return 0;
}
long int factorial (int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}