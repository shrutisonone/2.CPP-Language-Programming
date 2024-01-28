#include"student.h"
#include<iostream>
using namespace std;

class Student 
{
    int roll;
    char name[20];
    long int mark;

    public:
     void setData();
     void setData(int );
     void setData(int n,char* ch);

    void display();
    {
        int getnum();
        {
            return roll;
        }
        char* getName();
        {
            return name;
        }
        double getmarks();
        {
            return mark;
        }
    }
};

void Student::display()
{
    cout<<"\n Data \n Roll num"<<roll<<"\n Name"<<name<<"\n Marks"<<mark<<endl;
}

void Student::setData()
{ 
   cout<<"Roll number "<<endl;
   cin>>roll;
   cout<<"Name :"<<endl;
   cin>>name;
   cout<<"Marks Obtained"<<endl;
   cin>>mark;
}

void Student::setData(int n)
{
    roll=n;
    cout<<"Name"<<endl;
    cin>>name;
    cout<<"Marks Obtained"<<endl;
    cin>>mark;
}

void Student::setData(int n,char ch)
{
    roll=n;
    name[90]=ch;
    cout<<"Marks Obtained"<<endl;
    cin>>mark;
}

void main()
{
    Student a;
    a.setData();
    a.display();
}