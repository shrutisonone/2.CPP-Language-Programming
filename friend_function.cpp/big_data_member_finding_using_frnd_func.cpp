#include<bits/stdc++.h>
using namespace std;

class test2;
class test1
{
    private:
    int a;
   public:
    void setData()
    {
      cout<<"a"<<endl;
      cin>>a;
    }
    void display()
    {
        cout<<"number"<<a;
    }

    friend void large(test1 ,test2 );
};

class test2
{
 private:
    int b;
   public:
    void setData()
    {
      cout<<"b"<<endl;
      cin>>b;
    }
    void display()
    {
        cout<<"number"<<b;
    }

    friend void large(test1,test2);
};

void large(test1 t1, test2 t2)
{
    if(t1.a > t2.b)
    {
        cout<<" a is bigger than b"<<endl;
    }
    else if(t2.b > t1.a)
    {
        cout<<" b is bigger than a"<<endl;
    }
    else
    {
        cout<<" a and b are equal "<<endl;
    }

}

int main()
{
    test1 t1;
    test2 t2;
    t1.setData();
    t1.display();
    t2.setData();
    t2.display();
    large(t1,t2);

}
