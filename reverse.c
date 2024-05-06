#include<stdio.h>
#include<string.h>
 
int main() 
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    printf("Entered string is: %s\n",str);
    int start=0,end=strlen(str)-1;
	    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
 
        start++;
        end--;
    }
    printf("Reversed string is: %s",str);
 
    return 0;
}