#include<bits/stdc++.h>
using namespace std;

class Number 
{
  int num;
  public:
   Number()
   {
    cout<<"Default"<<endl;
    num=0;
   }
   Number(int n)
   {
    cout<<"Parameterized"<<endl;
    num=n;
   }
   Number(Number &n)
   {
    cout<<"Copy"<<endl;
    num=n.num;
   }
   ~Number()
   {
    cout<<"Destructor"<<endl;
   }
   void display()
   {
    cout<<"\n Num"<<num<<endl;
   }
};

int main()
{
     Number n;
    n.display();
    {
        Number b(10);
        b.display();
    }
     Number();
    n.display();
}
//destructor is called when an object ends
