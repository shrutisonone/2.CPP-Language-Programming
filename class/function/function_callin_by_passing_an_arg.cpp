#include<iostream>
using namespace std;

void repli(char ch,int n)
{
    int i=1;

    while(i<=n)
    {
        cout<<ch;
        i++;
    }
    cout<<endl;
}

int main()
{
    repli('A',7);
    repli('B',5);
    repli('P',10);
}