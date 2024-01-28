#include<bits/stdc++.h>
using namespace std;

class Addition
{

    public:

    int sum(int a,int b)
    {
        std::cout<<"a+b:"<<a+b;
    }
    int sum(int a,int b,int c)
    {
        std::cout<<"a+b+c="<<a+b+c;
    }
};

int main()
{

    Addition A;

    A.sum(4,5);

    A.sum(4,5,6);
    return 0;
}