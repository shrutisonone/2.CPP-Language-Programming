#include<bits/stdc++.h>
using namespace std;

class Number 
{
    private:
    int num;
    public:
    void setData()
    {
        cout<<"\nEnter Data"<<endl;
        cin>>num;
    }
    void display()
    {
      cout<<"\n Data"<<num;
    }
};

int main()
{
    Number s;
    s.setData();
    s.display();
    return 0;
}