//Scope Resolution Operator
#include<bits/stdc++.h>
int a=1000;
int main()
{
    using namespace std;
    int a=1;
    {
        int a=10;
        {
            int a=100;
            cout<<"\n A="<<a<<"\t"<<::a;
        }
        cout<<"\n A="<<a<<"\t"<<::a;

    }
    cout<<"\n A="<<a<<"\t"<<::a;
    return 0;
}