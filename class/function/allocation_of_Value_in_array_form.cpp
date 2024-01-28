#include<iostream>
#include<iomanip>

int main()
{
    using namespace std;

    int *ptr=new int[20];
    cout<<"Enter 20 values\n";
    for(int i=0;i<20;i++)
    {
        cin>>ptr[i];
    }
    cout<<"\n Data";
    for(int i=0;i<20;i++)
    {
        cout<<setw(4)<<ptr[i];
    }
    delete ptr;
    
}