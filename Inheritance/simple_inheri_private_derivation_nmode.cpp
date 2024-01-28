#include<bits/stdc++.h>
using namespace std;

class Number 
{
  int num;
   public:

      void setData();
     inline void display()
     {
        cout<<"\n Data Displayed: "<<endl;
     }
     inline void setData(int a)
     {
        num=a;
     }
     inline int getnum()
     {
       return num;
     }

};

void Number::setData()
{
    cout<<"\n Data"<<endl;
    cin>>num;
}

class ExNumber:private Number 
{
   public:
    void table();
    void input();
    void display();
    void input(int a);
    int prime();
    int getData();
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

void ExNumber::input()
{
    setData();
}

void ExNumber:: input(int n)
{
    getData();
}

void ExNumber::display()
{
    display();
}

int ExNumber::getData()
{
    return getData();
}

int main()
{
    ExNumber p;
    p.input();
    p.table();
    p.display();
    p.input(9);
    p.prime();
    p.display();
    return 0;
}