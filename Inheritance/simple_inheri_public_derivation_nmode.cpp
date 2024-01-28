#include<bits/stdc++.h>
using namespace std;

class Number 
{
  int num;
   public:
     void setData()
     {
        cout<<"\n Data "<<endl;
        cin>>num;
     }
     void display()
     {
        cout<<"\n Data Displayed: "<<endl;
     }
     void setData(int a)
     {
        num=a;
     }
     int getnum()
     {
       return num;
     }

};

class ExNumber:public Number 
{
   public:
    void table();
    int prime();
};

void ExNumber:: table()
{
    int i=1;
    int k=getnum();
    for(i=1;i<=10;i++)
    {
        cout<<i<<"*"<<k<<"="<<i*k<<endl;
    }
}

int ExNumber:: prime()
{
    int i=2;
    int k=getnum();
    for(i=2;i<=k;i++)
    {
       if(k%2==0)
       {
       break;
       }
    }
    return (i==k);
}

int main()
{
    ExNumber p;
    p.setData();
    p.table();
    p.display();
    p.prime();
    
    return 0;
}