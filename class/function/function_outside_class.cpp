#include<bits/stdc++.h>
 using namespace std;

class Geek
{ 
    public:
    string geekname;
    double doub;
    
    void displayname()
    {
        cout<<"Geek name is "<<geekname;
    }

    void inputData();
    void displaydouble();
};

void Geek::inputData()
{
       cout<<"\nEnter the Value for double data type"<<endl;
       std::cin>>doub;
}

void Geek::displaydouble()
{    
    cout<<"\nDoubel integer is "<<doub;
}

int main()
{
    Geek prnt;
    prnt.geekname="GFG";
    prnt.displayname();
    prnt.inputData();
    prnt.displaydouble();
    return 0;
}

