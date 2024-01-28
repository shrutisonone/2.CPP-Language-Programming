#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<setw(5)<<12;
    cout<<setw(15)<<setiosflags(ios::left)<<"AMARPREET"<<resetiosflags(ios::left);
    cout<<setw(7)<<setprecision(2)<<setfill('*')<<9.82<<endl;

}