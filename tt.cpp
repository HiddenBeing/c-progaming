#include<iostream>
using namespace std;
main()
{
    int p,c=0,i;
    cout<<"Enter a value: ";
    cin>>p;
    while(p!=0)
    {
        i=p%10;
        c=c+1;
        p=p/10;
    }
    cout<<c;
}