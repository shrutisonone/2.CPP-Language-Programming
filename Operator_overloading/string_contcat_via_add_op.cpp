//operator overloading does operatoin on user defined objects/classes
//operator overloading is using of operator instead of function to perform some work of job
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class test
{
// how to add two strings
char str[100];
    public:
    void getStr()
    {
        cout<<"Enter the String"<<endl;cin>>str;
    }
    void showStr()
    {
        cout<<"String="<<str<<endl;
    }
    
    test operator+(test t2)    //test add(test t2)
    {
        test t3;
        
        strcpy(t3.str,str);
        strcpy(t3.str," ");
        strcpy(t3.str,t2.str);

        return t3;
    }
};

int main()
{
     test t1,t2,t3;
     t1.getStr();
     t2.getStr();
     t3=t1+t2;     //t3=t1.add(t2);
     t3.showStr();

     return 0;
}