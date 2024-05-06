#include<iostream>
using namespace std;
class facto1
{
    int n, f;
    public: 
    void operator++()
    {
        f=1;
        cout<<endl<<"Enter the term: ";
        cin>>n;
        for(;n!=0;)
        {
            f=f*n;
            n=n-1;
        }
    }
    void print1()
    {
        cout<<endl<<"Factorial is = "<<f;
    
    }
};
main()
{
    facto1 tt;
    ++tt;
    tt.print1();
}