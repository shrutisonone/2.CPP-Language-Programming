#include<bits/stdc++.h>
using namespace std;

class B;

class A               //independent client
{
    int num;
   public:
    void setData()
    {
      cout<<"num"<<endl;
      cin>>num;
    }
    void display()
    {
        cout<<"number "<<num<<endl;
    }

    void swap(B &);
};

class B        //dependent class
{
  int num;
   public:
    void setData()
    {
      cout<<"b num"<<endl;
      cin>>num;
    }
    void display()
    {
        cout<<"b number"<<num;
    }

  friend void A::swap(B &);
};

void A::swap(B &b)
{
  int temp=num;
  num=b.num;
  b.num=temp;
}

int main()
{
  A obj1;
  obj1.setData();
  obj1.display();
  B obj2;
  obj2.setData();
  obj2.display();
  obj1.swap(obj2);
  obj1.display();
  obj2.display();
  return 0;
}
