#include<bits/stdc++.h>
using namespace std;

class A
{
    int num1;
   public:
    void setData()
    {
      cout<<"number 1"<<endl;
      cin>>num1;
    }
    void display()
    {
        cout<<"number"<<num1;
    }

   friend void swap(A &,B &);
};

class B
{
    private:
    int num2;
   public:
    void setData()
    {
      cout<<"number 2"<<endl;
      cin>>num2;
    }
    void display()
    {
        cout<<"number"<<num2;
    }

    friend void swap(A &,B &);
};

void swap(A &a,B &b)
{
    int temp =a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData();
    obj1.display();
    obj2.setData();
    obj2.display();
    swap(obj1,obj2);
    obj1.display();
    obj2.display();

    return 0;
}