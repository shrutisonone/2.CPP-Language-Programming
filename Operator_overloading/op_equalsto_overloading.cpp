#include<bits/stdc++.h>
using namespace std;

class test
{
    int a;
    public:
     void getData()
     {
        cin>>a;
     }
     void operator==(test t2)   //void compare(test t2)  
     {
        if(a==t2.a)
        {
            cout<<"Both are same";
        }
        else
        {
            cout<<"Both are not same";
        }
     }
};

int  main()
{
    test t1,t2;
    cout<<"Enter the t1 object value"<<endl;
        t1.getData();
      cout<<"Enter the t1 object value"<<endl;
        t2.getData();
        (t1==t2);      //t1.compare(t2);
         
        return 0;
}