#include<bits/stdc++.h>
using namespace std;

class sample
{
    private:
   int a,b;
   friend void display(sample );
};

void display(sample s)
{
    s.a=10;
    s.b=20;
    cout<<"a="<<s.a<<endl;
    cout<<"b="<<s.b<<endl;

}

int main()
{
    sample s;
    display(s);
    return 0;
}