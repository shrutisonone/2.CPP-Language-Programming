#include<bits/stdc++.h>
using namespace std;

class box
{
    private:
     int l,b,h;
    public:
     void setdimen(int x,int y,int z)
     {
        l=x;b=y,h=z;
     }
     void showdimen()
     {
        cout<<"l"<<l<<"b"<<b<<"h"<<h;
     }
};

void main()
{
    box smallbox;
    smallbox.setdimen(12,5,10);
    smallbox.showdimen();
}