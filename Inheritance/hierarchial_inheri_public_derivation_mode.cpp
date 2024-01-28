#include<bits/stdc++.h>
using namespace std;

class ACCOUNT
{
   int accnum;
   char name[50];
    public:
      void getacc()
        {
          cout<<"Enter the Account Details"<<endl;
          cin>>accnum>>name;
        }
       void putacc()
       {  
         cout<<"Account Holder Name"<<name<<"Account number "<<accnum;
       }
};

class Saving:public ACCOUNT
{
   float bal;
    public:
     void getbal()
     {
        cout<<"Enter the Balance\n";
        cin>>bal;

        if(bal<500)
        {
            cout<<"MINIMUM BALANCE IS 500\n";
        }
        else
        {
            cout<<" Accout created\n";
        }
     }
};

class Current:public ACCOUNT
{
   float bal;
   public:
    void getbalance()
     {
        cout<<"Enter the Balance\n";
        cin>>bal;

        if(bal<1000)
        {
            cout<<"MINIMUM BALANCE IS 1000\n";
        }
        else
        {
            cout<<" Accout created\n";
        }
     }

};

int main()
{
    int option;
    cout<<"\n Write 1 for Creating Saving Account\n";
    cout<<"\n Write 2 for Creating Current Account\n";
    cin>>option;

    if(option==1)
    {
        Saving s;
        s.getacc();
        s.putacc();
        s.getbal();
    }
    else
    {
        Current c;
        c.getacc();
        c.putacc();
        c.getbalance();
    }
}