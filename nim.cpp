#include<iostream>
using namespace std;
class student
{
    char name[50];
    int rollno, age;
    public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cout<<endl<<"enter the name:";
    cout<<endl<<"enter the roll no:";
    cout<<endl<<"enter the age:";
}
void student::putdata()
{
    cout<<endl<<"your roll no:"<<rollno;
    cout<<endl<<"your name:"<<name;
    cout<<endl<<"your age:"<<age;
}
