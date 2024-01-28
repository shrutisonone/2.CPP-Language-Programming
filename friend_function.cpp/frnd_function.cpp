#include<bits/stdc++.h>
using namespace std;

class Number
{
   private:
    int no;
   public:
    void setData()
    {
      cout<<"no"<<endl;
      cin>>no;
    }
    void display()
    {
        cout<<"number"<<no;
    }

    friend void update(Number &a,int n);
};

void update(Number &a,int n)
{
    a.no=a.no+n;
}

int main()
{
    Number d;
    d.setData();
    d.display();
    update(d,10);
    d.display();
 
  return 0;
}
