#include<bits/stdc++.h>
using namespace std;

class Number 
{
    int num;
    public:
      Number()
      {
        num=0;
      }      
      Number(int a)
      {
        num=a;
      }
      ~Number()
      {
        return ;
      }
      void setData()
      {
         cout<<"\n Enter Roll Number ";
         cin>>num;
      }
      void display()
      {
        cout<<"\n Roll Number is "<<num<<endl;
      }
      void setData(int a)
      {
        num=a;
      }
      inline int getnum()
       {
        return num;
       }
};

    class  Markz:public Number
{
    int mark[5];
    public:
     Markz();
     Markz(int a);
     ~Markz()
     {
        return ;
     }
     void setData();
     void setData(int a);
      void display();

     int cal_tot();
};

Markz::Markz():Number()
{
    for(int i=0;i<5;i++)
    {
        mark[i]=0;
    }
}

Markz::Markz(int a):Number( a)
{
    for(int i=0;i<a;i++)
    {
        mark[i]=0;
    }
}

void Markz::setData()
{
    Number::setData();

    cout<<"\n Markz"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>mark[i];
    }

}

void Markz::setData(int a)
{
   Number::setData( a);

   cout<<"\n Markz"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>mark[i];
    }
}

void Markz::display()
{
    Number::setData();

    cout<<"\n Markz"<<endl;
    for(int i=1;i<5;i++)
    {
        cout<<"  "<<mark[i];
    }
}

int Markz::cal_tot()
{
    int tot=mark[0];
    int i=1;
    for(i=1;i<5;i++)
    {
      tot=tot+mark[i];
    }
    return tot;
}

class Result : public Markz
{
    double avg;
     public:
      Result();
      Result(int a);
      ~Result()
      {
        return ;
      }
      void setData();
      void setData(int a);
      void display();
};

void Result::setData()
{
    Markz::setData();
    avg=cal_tot()/5.0;
}

void Result::setData(int a )
{
    Markz::setData(a);
    avg=cal_tot();

}

void Result::display()
{
    Markz::setData();
    cout<<"\n Average "<<avg;
}

Result :: Result() : Markz()
{
    avg=0.0;
}

Result::Result(int a):Markz(a)
{
    avg=0.0;
}


int main()
{
   Result a;
   a.setData();
   a.display();

    return 0;

}