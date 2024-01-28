#include<bits/stdc++.h>
 using namespace std;

class Geek
{ 

    private:
      double doub;
    public:
    string geekname;
    
    void displayname()
    {
        cout<<"Geek name is "<<geekname;
    }
    void inputData()
    {
       cout<<"\nEnter the Value for double data type"<<endl;
       std::cin>>doub;
    }
    void displaydouble()
    {
        
        cout<<"\nDoubel integer is "<<doub;
    }
};

int main()
{

    Geek prnt;
    prnt.geekname="GFG";
    prnt.displayname();
    prnt.inputData();
    prnt.displaydouble();
    return 0;
}

